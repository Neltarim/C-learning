/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 01:11:15 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/23 09:48:14 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	long	result;
	int		index;
	int		ifnegative;

	result = 0;
	index = 0;
	ifnegative = 1;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-')
		ifnegative = 0;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + str[index] <= '9';
		index++;
	}
	if (ifnegative == 0)
		return (result * -1);
	return (result);
}
