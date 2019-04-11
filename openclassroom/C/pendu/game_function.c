#include <stdlib.h>
#include <stdio.h>
#include "display_functions.c"

  /*//////proto des fonctions/////*/

void    display_menu();
void    display_hanged();
void    display_word(char *hiddenWord, int lenWord);
void    display_rules();
void    display_newGame();


  /*//////proto des fonctions/////*/


char    my_upperCase(char c)    //un toupper simplifé, j'aime pas le nom de cette fonction. 
{
    if (c >= 'a' && c <= 'z')
        {
            c -= 32;
            return (c);
        }
    else if (c >= 'A' && c <= 'Z')
        return (c);
}

char    printChar()             //lit le char en cours
{
    char c = 0;

    char = getchar();
    char = my_upperCase(c);

    while (getchar() != '\n') ;

    return c;

    /* using : maLettre = printChar(); */
}

void    leaveGame()
{
    printf("\r\n\r\n    Revenez vite !\r\n\r\n");
    exit();
}

void    errorGame()
{
    printf("\r\n    Il semblerait qu'il y ait une erreur... dans le doûte, Au revoir !\r\n\r\n");
    leaveGame();
}

void    newGame()