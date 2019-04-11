#include <stdlib.h>
#include <stdio.h>

void    display_menu()
{
    printf("\r\n\r\n    ===========Trouve ou je te pend !=============\r\n\r\n");
    printf("\r\n\r\n        Bienvenue au jeu du pendu,\r\n\r\n");
    printf("\r\n        Trouve le mot avant que la corde ne te trouve !\r\n\r\n\r\n\r\n");

    printf("\r\n\r\n    **********************************************\n");
    printf        ("    *       1 : Afficher les règles              *\n");
    printf        ("    *       2 : tableau des scores               *\n");
    printf        ("    *       3 : Nouvelle partie                  *\n");
    printf        ("    *       4 : Quitter le jeu                   *\n");
    printf        ("    **********************************************\n\n\n\n");

    printf("\r\n\n    Reponse: ");
}

void    display_rules()
{
    printf("\r\n\r\n\r\n\r\n");
    printf       ("    ***********************************************\n");
    printf       ("    *   Les règles du jeux sont simples :         *\n");
    printf       ("    * Trouver le mot secret en moins de 10 tours !*\n");
    printf       ("    * Les mots sont en majuscule et sans accents  *\n");
    printf       ("    ***********************************************\n\n\n\n");
}

void    display_newGame()
{
    printf("\r\n\r\n  C'est parti ! \n\n");
}

void    display_hanged()
{
        printf("QU'ON LE PENDE !!!!!!");

        printf("       ,==========Y===                       \n");
        printf("       ||  /      |                          \n");
        printf("       || /       |                          \n");
        printf("       ||/        O   Ta gueule !            \n");
        printf("       ||        /|\\                        \n");
        printf("       ||        / \\                        \n");
        printf("       ||                         Ah ah.     \n");
        printf("      /||                                 o  \n");
        printf("     //||                                /|\\\n");
        printf("    ============_________________________/_\\\n");   
}

void    display_guessWord(char *guessWord, int lenWord)
{
    int index = 0;

    while (guessWord[index] <= lenWord)
    {
        printf("    %c \n\n", guessWord[index]);
        index++;
    }
}

int    display_replay(int replay)
{
    char yesno = 'N';
    printf("\n\nsouhaitez vous revenir au menu? (Y/N) : ");
    scanf("%c", &yesno);

    if(yesno == 'Y')
    {
        printf("\n\n\n    retour au menu !\n\n\n");
        return (replay = 1);
    }
    else
    {
        printf("\n\n\n\n    Merci d'avoir joué !\n\n");
        exit(0);
    }
    exit(0); 
}