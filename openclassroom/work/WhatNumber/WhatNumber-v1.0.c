#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int     my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char *str)
{
    int index = 0;

    while(str[index])
    {
        my_putchar(str[index]);
        index++;
    }
}

int     game(int number)
{
    int numbTest = 0;
    my_putstr("Devinez le nombre !\n");
    scanf("%d", &numbTest);

    while(numbTest != number)
    {
        if(numbTest < number)
        {
            my_putstr("c'est plus !\n");
            return (game(number));
        }
        else if(numbTest > number)
        {
            my_putstr("c'est moins !\n");
            return (game(number));
        }
    }
     if(numbTest == number)
    {
         my_putstr("bien joué ! Vous avez gagné en ");
        return (0);
    }
    return (0);
}

int     main(int argc, char **argv)
{
    int player = 0;
    int number = 0;
    const int MAX = 100, MIN = 1;

    my_putstr("1 ou 2 joueurs?\n");
    scanf("%d", &player);
    if(player == 2)
    {
        my_putstr("le joueur 1 doit choisir un nombre\n");
        scanf("%d", &number);
        if (number < MIN || number > MAX)
        {
            my_putstr("veuillez prendre un nombre entre 1 et 100.\n");
            return (0);
        }
        game(number);
        return (0);
    }
    else if(player == 1)
    {
        my_putstr("la machine choisit un nombre\n");
        srand(time(NULL));
        number = (rand() % (MAX - MIN + 1)) + MIN;
        game(number);
        return (0);
    }
    else
    {
        my_putstr("Nombre de joueurs incorrect, abruti.\n");
        return (0);
    }
    
    return (0);
}