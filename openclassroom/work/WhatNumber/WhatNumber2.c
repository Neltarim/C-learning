#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*      Bonne chance pour comprendre mon code :D   

        Bon pour t'aider à corriger je vais mettre des coms
         et expliquer un peu. Commence par lire le main, tout sera indiqué   */


void     game(int number, int try)       //on prend en para' le nombre de try (important)
{
    int numbTest = 0;                   //on déclare le test du joueur
    scanf("%d", &numbTest);

    while(numbTest != number)           //on loop tant que le joueur n'a pas trouvé
    {
        if(numbTest < number)           //si le joueur est en dessous
        {
            printf("c'est plus !\n");
            ++try;                          //on incrémente try pour marquer le nombre de tours
            return (game(number, try));     //et on relance la fonction en récursif (c'était le challenge)
        }
        else if(numbTest > number)          //si le joueur est au dessus
        {
            printf("c'est moins !\n");
            ++try;                          //on incrémente toujours le nombre de tours
            return (game(number, try));     //et on relance encore de manière récursive !
        }
    }
     if(numbTest == number)     //si le joueur trouve le nombre
    {
         printf("bien joué ! Vous avez gagné en ");     //on ne renvoie rien, juste un display
         printf("%d", try);
         printf(" tours !\n\n");
    }
}

int     main(int argc, char **argv)  //on initialise le main
{
    int player = 0;                  //il faut un nombre de joueurs
    int number = 0;                  //la valeur initiale du nombre à trouver
    int difficulty = 0;              //celle de la difficulté
    int try = 1;                     //le nombre de coups (init à un)
    int MAX = 0;                     //le max sera définit plus tard par le joueur
    int MIN = 1;                     //pas besoin de le changer
    char anotherGame = 'Y';          //le statut du jeu est en mode ouvert

    printf("1 ou 2 joueurs?\n\n");
    scanf("%d", &player);

    if (player != 1 && player != 2)     //on gère les erreurs de frappe sur le nombre de joueurs
    {
        printf("Nombre de joueurs incorrect.\n");
        return (0);
    }


    printf("quelle difficulté choisissez vous?\n\n");        //display de la difficulté
    printf("1 = entre 1 et 100\n \n");
    printf("2 = entre 1 et 1000\n \n");
    printf("3 = entre 1 et 10 000\n \n");
    scanf("%d", &difficulty);

    if (anotherGame == 'N')     //vérification pour éviter un loop involontaire
    {
        printf("Merci d'avoir joué !\n");
        return (0);
    }
    while(anotherGame == 'Y')       //'Y' siginifie que le joueur veut jouer donc on lance la boucle de jeu
    {
        switch (difficulty)         //on modifie la valeur de MAX en fonction de la difficulté choisie 
        {
            case 1:
                MAX = 100;
                break;

            case 2:
                MAX = 1000;
                break;

            case 3:
                MAX = 10000;
                break;
        
            default:                //on oublie pas de gérer les cas d'erreurs
                printf("vous devez choisir une difficulté.\n\n");
                break;
        }

        number = 0;     //on refresh la valeur du nombre pour éviter le stacking de la précédente game

        if(player == 2)     //mode 2 joueurs 
        {
            printf("le joueur 1 doit choisir un nombre\n\n");
            scanf("%d", &number);
            if (number < MIN || number > MAX)       //on gère les cas d'erreurs
            {
                printf("veuillez prendre un nombre valide.\n");
                return (0);
            }

            printf("Devinez le nombre !\n\n");
            game(number, try);      //RDV plus haut dans la fonction game :D !
        }
        else if(player == 1)    //mode 1 joueur
        {
            printf("la machine choisit un nombre\n\n");
            srand(time(NULL));                            //fonction de random
            number = (rand() % (MAX - MIN + 1)) + MIN;
            printf("Devinez le nombre !\n\n");
            game(number, try);      //on lance la fonction de jeu avec le nombre randomisé
        }
    
        printf("Voulez vous rejouer? (Y/N)\n\n");   //module de nouvelle partie
        scanf(" %c", &anotherGame);

        if (anotherGame == 'N')         //si le joueur décide d'arrêter alors anotherGame vaudra N et le jeu s'arrêtera
        {                               //et si il choisit Y alors la boucle de jeu se relance !
            printf("Merci d'avoir joué !\n");   
            return (0);
        }

        if (anotherGame != 'Y' && anotherGame != 'N')   //si il essaye de faire autre chose que oui/non alors argument invalide
        {
            printf("argument invalide, tant pis !\n");
            return (0);
        }
    }
    return (0); //petit return  de sécurité, ça sert à rien mais juste au cas ou
}

/*  Voilà merci d'avoir suivi mon code ! j'avais pour challenge de faire le jeu en récursif
    ce qui m'a causé pas mal de déconvenus et quelques seg fault quand j'ai ajouté le module
    de new game. J'aurai bien mis un affichage un peu plus propre m'enfin j'aimerai bien passer
    à la suite quand même.

            bref la bise et bon courage pour la suite !    */