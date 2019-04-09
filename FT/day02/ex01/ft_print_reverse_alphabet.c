/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 01:34:52 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/05 06:04:06 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		ft_putchar(alpha);
		alpha--;
	}
}
