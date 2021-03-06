/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2 018/07/07 12:06:24 by ratin             #+#    #+#             */
/*   Updated: 2018/07/21 20:14:23 by ahippoly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_first_line(int x, int y, int mempos, char *str)//change
{
	int		i;

	i = 1;
	if (x >= 1 && y >= 1)
	{
		str[mempos] = 'o';//change
		mempos++;
		if (x > 1)
		{
			while (i < x - 2)
			{
				str[mempos] = '-';//change;
				mempos++;//change
				i++;
			}
			str[mempos] = 'o';//change
		}
		str[mempos + 1] = '\n';//change
	}
}

void	display_middle_line(int x,int mempos, char *str)//change
{
	int		i;

	i = 0;
	if (x >= 1)
	{
		str[mempos] = '|';//change
		mempos++;
		if (x > 1)
		{
			while (i < x - 2)
			{
				str[mempos] = ' ';//change;
				mempos++;//change
				i++;
			}
			str[mempos] = '|';//change
		}
		str[mempos + 1] = '\n';//change
	}
}

char	*rush(int x, int y)//change
{
	int		i;
	int mempos;//change
	char *str;//change

	i = 0;
	mempos = 0;//change
	str = (char*)malloc( ((x + 1) * y) + 1);//change
	display_first_line(x, y, mempos, str);//change
	mempos =  x + 1;//change
	while (i < y - 2)
	{
		display_middle_line(x, mempos, str);//change
		i++;
		mempos = mempos + x + 1;//change 
	}
	if (y >= 2)
		display_first_line(x, y, mempos, str);//change
	str[mempos + x + 1] = '\0';
	return (str);
}
