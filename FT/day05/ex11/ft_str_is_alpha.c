/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 06:52:05 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/22 02:59:41 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			index++;
		else if (str[index] >= 'A' && str[index] <= 'Z')
			index++;
		else
			return (0);
	}
	return (1);
}
