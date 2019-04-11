#include <stdlib.h>
#include <stdio.h>
#include "display_function.h"

  /*//////proto des fonctions/////*/

void    display_menu();
void    display_hanged();
void    display_word(char *hiddenWord, int lenWord);
void    display_rules();
void    display_newGame();
int    display_replay(int replay);


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

int     my_strLen(char *str)
{
    int index = 0;

    while(str[index])
        index++;

    return(index);
}

char    printChar()             //lit le char en cours
{
    char c = 0;

    c = getchar();
    c = (my_upperCase(c));

    while (getchar() != '\n') ;

    return c;

    /* using : maLettre = printChar(); */
}

void    leaveGame()
{
    printf("\r\n\r\n    Revenez vite !\r\n\r\n");
    exit(0);
}

void    errorGame()
{
    printf("\r\n    Il semblerait qu'il y ait une erreur... dans le doûte, Au revoir !\r\n\r\n");
    leaveGame();
}

int    rulesGame()
{
    char choice = 'N';

    display_rules();
    scanf("%c", &choice);

    if(choice == 'Y')
        return (0);
}

int     strLen(char *str)
{
    int index = 0;

    while(str[index])
    {
        index++;
    }
    return (index);
}

char    *fullUnderscore(char *guessWord)
{
    int index = 0;

    while(guessWord[index])
        {
            guessWord[index] = '_';
            index++;
        }
        return (guessWord);
}

char    *findLetter(char *mysteryWord, char *guessWord, char c)
{
    int index = 0;

    while(guessWord[index])
    {
        if(guessWord[index] == c)
        {
            mysteryWord[index] == guessWord[index];
        }

        index++;
    }
    return (guessWord);
}

int     my_strCmp(char *str1, char *str2,)
{
    int boolean = 0;
    int index = 0;

    while(str1[index] && str2[index])
    {
        if(str1[index] == str2[index])
            index++;
        else
            return (boolean);
    }

    boolean = 1;
    return (boolean);
}

void    newGame()/****** NEED ENCORE DU TAFF SUR CETTE FONCTION ******/
{
    char *mysteryWord = "ROUGE";    //on test avec le mot rouge
    char *guessWord = NULL;         //on init la string de test à null
    char c = 0;
    int try = 10;
    int index = 0;
    int len = 0;
    len = my_strLen(mysteryWord);

    display_newGame();

    guessWord = malloc((len) * sizeof(char));
    if(guessWord == NULL)
        exit(0);

    fullUnderscore(guessWord);
printf("------------ %s         -------------", guessWord);
printf("------------ %s         -------------", mysteryWord);

    while (my_strCmp(guessWord, mysteryWord) != 1)
    {
        printf("\r\n  quel est le mot ?  ");
        printf("%s\r\n", guessWord);
        printf("\r\n  Proposez une lettre : ");
         scanf("%c", &c);

        guessWord = findLetter(mysteryWord, guessWord, c);

        else
        {
            try--;

            if(try == 0)
            {
                display_hanged();
                break;
            }
            else
                printf("\r\n  WRONG MA BOY ! il ne vous reste plus que %d essaie(s)\r\n", try);
        }
    }
        if (my_strCmp(guessWord, mysteryWord) == 1)
        {
            printf("\r\n  Vous avez gagné !\r\n");
            printf(guessWord);
            break;
        }

    free(guessWord);
}


int main(int argc, char **argv)
{
    int menuChoice = 0;
    int replay = 1;

    while(replay == 1)
    {
        display_menu();
        scanf("%d", &menuChoice);

        switch(menuChoice)
        {
            case 1:     rulesGame();           break;
            case 2:     return (0);            break;
            case 3:     newGame();             break;
            case 4:     leaveGame();           break;
            default:    errorGame();           break;
        }

        display_replay(replay);
    }
    return (0);
}