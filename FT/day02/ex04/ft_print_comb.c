/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 04:58:58 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/06 07:33:20 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	triple_putchar(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = '0' - 1;
	while (++first <= '7')
	{
		second = first;
		while (++second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				triple_putchar(first, second, third);
				if (first != '7' || second != '8' || third != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				third++;
			}
		}
	}
}
