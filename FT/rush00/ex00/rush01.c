/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:13:17 by ratin             #+#    #+#             */
/*   Updated: 2018/07/08 23:39:36 by bihattay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_first_line(int x, int y)
{
	int		i;

	i = 0;
	if (x >= 1 && y >= 1)
	{
		ft_putchar('/');
		if (x > 1)
		{
			while (i < x - 2)
			{
				ft_putchar('*');
				i++;
			}
			ft_putchar('\\');
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
		ft_putchar('\\');
		if (x > 1)
		{
			while (i < x - 2)
			{
				ft_putchar('*');
				i++;
			}
			ft_putchar('/');
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
		ft_putchar('*');
		if (x > 1)
		{
			while (i < x - 2)
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('*');
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
