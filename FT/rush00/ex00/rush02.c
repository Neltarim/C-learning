/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:21:28 by ratin             #+#    #+#             */
/*   Updated: 2018/07/08 23:40:01 by bihattay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_first_line(int x, int y)
{
	int		i;

	i = 0;
	if (x >= 1 && y >= 1)
	{
		ft_putchar('A');
		if (x > 1)
		{
			while (i < x - 2)
			{
				ft_putchar('B');
				i++;
			}
			ft_putchar('A');
		}
		ft_putchar('\n');
	}
}

void	display_last_line(int x)
{
	int		i;

	i = 0;
	if (x >= 1)
	{
		ft_putchar('C');
		if (x > 1)
		{
			while (i < x - 2)
			{
				ft_putchar('B');
				i++;
			}
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	display_middle_line(int x)
{
	int		i;

	i = 0;
	if (x >= 1)
	{
		ft_putchar('B');
		if (x > 1)
		{
			while (i < x - 2)
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	display_first_line(x, y);
	while (i < y - 2)
	{
		display_middle_line(x);
		i++;
	}
	if (y >= 2)
		display_last_line(x);
}
