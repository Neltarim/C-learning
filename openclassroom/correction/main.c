#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 10

typedef enum{
    MENU_START = 0,
    MENU_SEE_RULES,
    MENU_CHANGE_RULES,
    MENU_PLAY_GAME,
    MENU_QUIT,
    MENU_STOP
};

int main_minNumber = MIN, main_maxNumber = MAX;
int main_guessNumber= 0;
int main_answer = 0;
int main_menu = 0;

int main(){
    srand(time(NULL));

    while (main_answer != MENU_QUIT){
        main_clear();

        switch(main_answer){
        default:                main_unknownAnswer();   break;
        case MENU_START:        main_welcome();         break;
        case MENU_SEE_RULES:    main_seeRules();        break;
        case MENU_PLAY_GAME:    main_playGame();        break;
        case MENU_CHANGE_RULES: main_changeRules();     break;
        case MENU_QUIT:                                 break;
        }

        // Affiche le menu
        printf("\r\n\r\n    * * * * * * * * * * * * * * *\r\n");
        printf(        "    *            MENU           *\r\n");
        printf(        "    * * * * * * * * * * * * * * *\r\n");
        for(main_menu = MENU_START; main_menu < MENU_STOP; main_menu++){
            switch (main_menu){
            case MENU_SEE_RULES:    printf("    *  %d: Afficher la regle     *\r\n", main_menu);                                    break;
            case MENU_PLAY_GAME:    printf("    *  %d: Jouer une partie      * \r\n",main_menu, main_minNumber, main_maxNumber);    break;
            case MENU_CHANGE_RULES: printf("    *  %d: Modifier la regle     *\r\n", main_menu);                                    break;
            case MENU_QUIT:         printf("    *  %d: Quitter               *\r\n", main_menu);                                    break;
            default:                                                                                                                break;
            }
        }

        //En attente de la reponse
        printf("    * * * * * * * * * * * * * * *\r\n");
        printf("\r\n    Reponse: ");
        scanf("%d", &main_answer);
    }

    printf("\r\nOk! Goodbye!\r\n");
    return 0;
}

int main_clear(){
    system("cls");
    printf("==================== LE PLUS OU MOINS ====================\r\n");
    return 0;
}
int main_welcome(){
    printf("\r\nBienvenue dans le jeu du plus ou moins!\r\n");
    return 0;
}

int main_seeRules(){
    printf("\r\nVous devez deviner un nombre mystere entre %d et %d\r\n", main_minNumber, main_maxNumber);
    return 0;
}
int main_playGame(){
    int rejouez = 1;
    int tryCount = 0;

    printf("\r\nC'est partie !!!");

    while (rejouez){
        main_guessNumber = (rand() % (main_maxNumber - main_minNumber + 1)) + main_minNumber;
        printf("\r\n\r\n");
        for( main_answer = 0; main_answer != main_guessNumber; scanf("%d", &main_answer)){
            printf("Le nombre mystere est plus ");
            if (main_guessNumber > main_answer)
                printf("+grand+");
            else
                printf("-petit-");
            tryCount++;
            printf(" que [%d] !\r\nReponse: ", main_answer);
        }

        printf("\r\nBravo!!! \r\nLe nombre mystere est %d.", main_guessNumber);
        printf("\r\nVous avez reussi en %d coups.\r\n\r\n", tryCount);
        printf("Souhaitez vous refaire une partie? (1: Oui, 0: Non): ");
        rejouez = 0;
        tryCount = 0;
        scanf("%d", &rejouez);
        main_clear();
    }
    return 0;
}

int main_changeRules(){
    int attempt = 0;
    int lastMin, lastMax;
    lastMax = main_maxNumber;
    lastMin = main_minNumber;
    main_maxNumber = 0;
    main_minNumber = 0;

    while(main_maxNumber <= main_minNumber){
        main_clear();
        if(attempt++)
            printf("\r\n /!\\ Saisir une valeur max plus grande que la valeur min !!! \r\n");

        printf("\r\nSaisir la valeur min: ");
        scanf("%d", &main_minNumber);
        printf("\r\nSaisir la valeur max: ");
        scanf("%d", &main_maxNumber);

        if (attempt > 3){
            main_maxNumber = lastMax;
            main_minNumber = lastMin;
            break;
        }
    }
    main_clear();
    main_seeRules();
    return 0;
}

int main_unknownAnswer(){
    printf("\r\nJe n'ai pas reconnu votre reponse!\r\n");
    return 0;
}
