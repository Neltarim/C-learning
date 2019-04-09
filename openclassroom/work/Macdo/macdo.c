#include <unistd.h>
#include <stdio.h>

int    my_putchar(char c)
{
    write(1, &c, 1);
}

void   my_putstr(char *str)
{
    int index = 0;

    while(str[index])
    {
        my_putchar(str[index]);
        index++;
    }
}

int main(int argc, char **argv)
{
    int choice = 0;
    int result = (8 / 3) - 2;
    printf("%d", result);
    my_putstr("===Menu==\n1. Royal Cheese\n2. Mc deluxe\n3. Mc bacon\n4. Big Mac\n");
    my_putstr("Votre choix?\n");
    scanf("%d", &choice);

    switch (choice)
    {
        default:
        my_putstr("entre 1 et 4 monsieur, c'est si difficile que ça?\n");
            return (0);

        case 1:
            my_putstr("Et un royal cheese pour la deux !\n");
            break;
        case 2:
            my_putstr("Et un Mc deluxe pour la dame !\n");
            break;
        case 3:
            my_putstr("richard, un mac bacon pour le m'sieur !\n");
            break;
        case 4:
            my_putstr("Et un big mac pour l'autre con !\n");
            break;
    }

    return(0);
}
