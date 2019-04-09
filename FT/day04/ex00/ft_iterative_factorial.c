/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:04:03 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/19 05:25:43 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	facto;

	facto = nb - 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (facto < 0)
		return (0);
	while (facto != 0)
	{
		nb *= facto;
		facto--;
	}
	return (nb);
}
