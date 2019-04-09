/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 03:17:24 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/09 09:50:31 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		index;
	int		size;
	char	temp;

	index = 0;
	size = 0;
	while (str[size])
	{
		size++;
	}
	while (index < size)
	{
		temp = str[size - 1];
		str[size - 1] = str[index];
		str[index] = temp;
		index++;
		size--;
	}
	return (str);
}
