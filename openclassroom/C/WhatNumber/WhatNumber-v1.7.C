#include <stdio.h>
#include <stdlib.h>
#include <time.h>
       
    /********************************************************************************************/
    /*        Ceci est la version 1.4 de mon what number, je l'upgrade de temps en temps        */
    /*        quand je découvre de nouvelles choses dans mon cours de C, alors bienvenue dans   */
    /*        mon bordel et bon courage pour le comprendre ! Mais bon vu que je suis sympa      */
    /*        j'explique chaques lignes de mon code. (et oui je sais je pourrais l'opti bien    */
    /*        plus mais ce n'est pas l'intérêt, je veux y plug des trucs pour m'entrainer       */
    /*         ou juste denouvelles fonctionnnalités que je trouve cool!)                       */
    /********************************************************************************************/


void    printScore()    //display du score stocké dans le fichier scoreBoard.txt
{
    FILE* scoreBoard = NULL;
    int score[3] = {0};     //tableau des 3 meilleurs scores

    scoreBoard = fopen("scoreBoard.txt", "r");     //on ouvre le fichier en read only

    if (scoreBoard != NULL)        //on vérifie que le fichier existe
    {
        fscanf(scoreBoard, "%d %d %d", &score[0], &score[1], &score[2]);   //on save le résultat dans le tableau
        printf("  les meilleurs scores sont : %d, %d et %d\r\n\r\n", score[0], score[1], score[2]); //et on le display

        fclose(scoreBoard);        //on le ferme pour éviter de gâcher de la mémoire
    }
}

int     newRecord(int newScore)        //fonction de nouveau record
{
    FILE* scoreBoard = NULL;    
    int score[3] = {0};
    int index = 0;

    scoreBoard = fopen("scoreBoard.txt", "r"); //on ouvre le board en read only

    if (scoreBoard != NULL)  
    {
        fscanf(scoreBoard, "%d %d %d", &score[0], &score[1], &score[2]); //on save
        printf("  les meilleurs scores actuels sont : %d, %d et %d\r\n\r\n", score[0], score[1], score[2]);

        while (score[index] <= 2) //on parcours le tableau
        {
            if (newScore < score[index]) //on cherche un score supérieur au nouveau
                {
                    score[index] = newScore;    //on switch les valeurs du tableau
                    printf("  Waw ! c'est un nouveau record bravo !\r\n");

                    scoreBoard = fopen("scoreBoard.txt", "w+"); //on ouvre cette fois en supprimant le contenu

                    fprintf(scoreBoard, "%d %d %d", score[0], score[1], score[2]); //on réécrie les scores
                    printf("\r\n    les nouveaux records sont : %d, %d et %d\r\n\r\n", score[0], score[1], score[2]);
                    fclose(scoreBoard); //on oublie pas de refermer !
                    return (0);
                }
            index++;
        }

        printf("  Malheureusement ce n'est pas un nouveau record !\r\n\r\n");
        fclose(scoreBoard); //on referme si le joueur n'a pas fais de meilleur record
    }
}

void     game(int number, int try, int max)       //on prend en para' le nombre de try (important)
{
    int numbTest = 0;                   //on déclare le test du joueur
    scanf("%d", &numbTest);
    
    if (numbTest < max && numbTest > 1)     //on s'assure que l'argument est valide
    {
        while(numbTest != number)           //on loop tant que le joueur n'a pas trouvé
        {
           if(numbTest < number)           //si le joueur est en dessous
            {
                printf(" c'est plus !\r\n");
                ++try;                          //on incrémente try pour marquer le nombre de tours
                return (game(number, try, max));     //et on relance la fonction en récursif (c'était le challenge)
            }
            else if(numbTest > number)          //si le joueur est au dessus
            {
                printf(" c'est moins !\r\n");
                ++try;                          //on incrémente toujours le nombre de tours
                return (game(number, try, max));     //et on relance encore de manière récursive !
            }
        }
        
        if(numbTest == number)     //si le joueur trouve le nombre
        {
             printf("  bien joué ! Vous avez gagné en ");     //on ne renvoie rien, juste un display
             printf("%d", try);
             printf(" tours !\r\n");
             newRecord(try);    //rdv plus haut dans la deff de newRecord !
        }
    }
    else
    {
        printf("argument invalide ! \n\n");
        return (game(number, try, max));     //on relance en récursif si le joueur se trompe d'arguments
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
    char displayScore = 'N';           //affichage du tableau des scores        
    char anotherGame = 'Y';          //le statut du jeu est en mode ouvert

    printf("\r\n\r\nbonjour et bienvenue dans le What Number ! \r\n\r\n");

    printf("  voulez vous afficher les meilleurs scores précédents? (Y/N)\r\n");

    scanf("%c", &displayScore);

    switch(displayScore)           //display du score oui/non
    {
        case 'Y':
            printScore();   //c'est la première fonction au début ! (elle affiche les meilleurs scores)
            break;

        case 'N':
            printf("  passons aux choses sérieuses alors !\r\n");
            break;

        default:
            printf("   argument invalide.\n");
            break;
    }

    printf("    souhaitez vous jouer à 1 ou 2 joueurs?\r\n");
    scanf("%d", &player);

    if (player != 1 && player != 2)     //on gère les erreurs de frappe sur le nombre de joueurs
    {
        printf("  Nombre de joueurs incorrect.\r\n");
        return (0);
    }


    printf("     quelle difficulté choisissez vous?\r\n");        //display de la difficulté
    printf("  1 = entre 1 et 100\n\n");
    printf("  2 = entre 1 et 1000\n\n");
    printf("  3 = entre 1 et 10 000\r\n");
    scanf("%d", &difficulty);

    if (anotherGame == 'N')     //vérification pour éviter un loop involontaire
    {
        printf("  Merci d'avoir joué !\n");
        return (0);
    }
    while(anotherGame == 'Y')       //'Y' siginifie que le joueur veut jouer donc on lance la boucle de jeu
    {
        switch (difficulty)         //on modifie la valeur de MAX en fonction de la difficulté choisie 
        {
            case 1:     MAX = 100;      break;
            case 2:     MAX = 1000;     break;
            case 3:     MAX = 10000;    break;

            default:    printf("vous devez choisir une difficulté.\n\n");      break;
        }

        number = 0;     //on refresh la valeur du nombre pour éviter le stacking de la précédente game

        if(player == 2)     //mode 2 joueurs 
        {
            printf("   le joueur 1 doit choisir un nombre\r\n\r\n");
            scanf("%d", &number);
            if (number < MIN || number > MAX)       //on gère les cas d'erreurs
            {
                printf("veuillez prendre un nombre valide.\n");
                return (0);
            }

            printf("  Devinez le nombre !\r\n");
            game(number, try, MAX);      //RDV plus haut dans la fonction game :D !
        }
        else if(player == 1)    //mode 1 joueur
        {
            printf("  la machine choisit un nombre\r\n");
            srand(time(NULL));                            //fonction de random
            number = (rand() % (MAX - MIN + 1)) + MIN;
            printf("  Devinez le nombre !\r\n");
            game(number, try, MAX);      //on lance la fonction de jeu avec le nombre randomisé
        }
    
        printf("     Voulez vous rejouer? (Y/N)\r\n");   //module de nouvelle partie
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

                    /*  Voilà le bousin ! (en même temps je vous avais prévenu)

                                                         bref la bise !    */


                                     /***************/
                                     /*          */
                                    /* Neltarim */
                                   /*          */
                                /****************/