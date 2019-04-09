#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int x, int y)
{
	char tabABC[20000];	//on initie deux tableau avec une valeur haute
	char tabBB[20000];
	int printIndexABC = 0;
	int printIndexBB = 0;
	int defiler = 0;
	int indexABC = 0;
	int indexBB = 0;
	int tempX = x;

	while(x != 0)			//on gere la size de tabABC en fonction de X et on print B
	{
		while(tabABC[printIndexABC])
		{
			tabABC[printIndexABC] = 'B';
			printIndexABC++;
			x--;

			if(x == 0)
			{
				printIndexABC++;
				tabABC[printIndexABC] = '\0';
			}
		}
	}
	tabABC[0] = 'A';

	while(tabABC[defiler])		
	{
		defiler++;

		if(tabABC[defiler] == '\0')	//on defile la chaine pour ecrire C a la fin
		{
			defiler--;
			tabABC[defiler] = 'C';

			while(tabABC[indexABC])		//on ecrit tout simplement la chaine
			{
				ft_putchar(tabABC[indexABC]);
				indexABC++;
			}
			ft_putchar('\n');		//retour chariot et break de la boucle
			break;
		}
	}

	while(y != 0)		//on definie le nombre de ligne ecrite avec la valeur de Y
	{
		while(tempX != 0)	//on definie encore une fois la longueur de la string avec la valeur de X dans une var temp
		{
			while(tabBB[printIndexBB])	//on print un espace dans toute la chaine
			{
				tabBB[printIndexBB] = ' ';
				printIndexBB++;
			}
			indexBB = 0;		//on reset indexBB, putchar retour chariot et y--
			ft_putchar('\n');
			tempX--;
		}
		y--;
	}
	indexABC = 0;

	while(tabABC[indexABC])		//on reecrit la string ABC
	{
		ft_putchar(tabABC[indexABC]);
		indexABC++;
	}		
}

int	main()
{
	display(4, 15);
	return 0;
}
