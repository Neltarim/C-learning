/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:35:54 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/19 05:27:59 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;

	result = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	while (result <= nb / 2 && result < 46341)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
