#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main ( int argc, char** argv )
{
    int niveau =0;
    printf("Bienvenue dans le jeux plus ou moins\n");
    printf("Veuiller choisir un niveau entre 1 et 3:");
    scanf("%d",&niveau);
    printf("\n Vous êtes maitenant en niveau %d \n\n",niveau);
    int MAX, MIN=1;
    if(niveau==1)
        MAX=100;
    if(niveau==2)
        MAX=1000;
    if(niveau==3)
        MAX=10000;
    bool nouvellePartie=false;
    int option=1;
    do
    {
        int nbCoup=0;
        int nombreMystere = 0, nombreEntre = 0;
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        do
        {
            nbCoup++;
            printf("Quel est le nombre ? ");
            scanf("%d", &nombreEntre);
            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
            {
                printf ("Bravo, vous avez trouve le nombre mystere en %d coup !!!\n\n",nbCoup);
                printf ("Tapez 1 si vous voulez faire une nouvelle partie et 0 si non :");
                scanf("%d",&option);
                if(option==1)
                    nouvellePartie=true ;
                else
                    nouvellePartie=false;
            }
        } while (nombreEntre != nombreMystere);

    }while (nouvellePartie);
    printf ("\n Merci d'avoir joué");

    return 0;
}
