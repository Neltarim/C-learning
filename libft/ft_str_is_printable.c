/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:11:10 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/20 07:14:47 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 8 && str[index] <= 13)
			return (0);
		else
			index++;
	}
	return (1);
}
