#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fichier = NULL;

    fichier = fopen("modifFichier/test.txt", "r+");

    if (fichier != NULL)
    {
        //manipulation du fichier

        fclose(test.txt);
    }
    else
    {
        printf("impossible d'ouvrir le fichier test.txt")
        return (0);
    }
    

    return (0);
}