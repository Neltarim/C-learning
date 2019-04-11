#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     main()
{
    char ville[100];

    printf("Dans quelle ville habitez vous? ");
    scanf("%s", ville);
    printf("\nVous habitez %s, je vois ! \n", ville);

    return(0);
}