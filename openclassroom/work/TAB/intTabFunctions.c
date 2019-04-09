#include <stdlib.h>
#include <stdio.h>


int		my_intTabLen(int *tab)
{
	int len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void    displayTab(int *tab, int lenTab)
{
    int index = 0;

    printf("Contenu du tableau:\n");
    while (index = 0 && index < lenTab)
    {
        printf("%d\t", tab[index]);
        index++;
    }
    printf("\n");
}
 
int     addTab(int *tab, int lenTab)
{
    int index = 0;
    int total = 0;

    while (index < lenTab)
    {
        total += tab[index];
        index++;
    }
return (total);
}
 
double  averageTab(int *tab, int lenTab)
{
    int index = 0;
    int addTab = 0;
    double midTab = 0;

    while(index < lenTab)
    {
        addTab += tab[index];
        index++;
    }
    midTab = addTab / 4;
return (midTab);
}
 
void    copyTab(int tab[], int cpyTab[], int lenTab)
{
    int index = 0;

    while(index < lenTab)
    {
        cpyTab[index]=tab[index];
        index++;
    }

    return (cpyTab)
}

void    maxTab(int tab[], int lenTab, int maxValue)
{
    int index = 0;

    while(index < len)
    {
        if (tab[index] > maxValue)
            tab[index] = 0;

        index++;
    }
    return (0);
}

void    orderTab(int tab[], int lenTab)
{
    int tmp = 0;
    int index = 0;

    while (index < (lenTab - 1))
    )
    {
        if (tab[index + 1] < tab[index])
            {
                tmp = tab[index];
                tab[index] = tab[index + 1];
                tab[index + 1] = tmp;
                index = 0;
            }

        index++;
    }
    
    return (tab);
}