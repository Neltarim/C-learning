/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:17:41 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/22 03:06:52 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int index_src;

	index = my_strlen(dest);
	index_src = 1;
	dest[index] = src[0];
	index++;
	while (src[index_src])
	{
		dest[index] = src[index_src];
		index++;
		index_src++;
	}
	dest[index] = '\0';
	return (dest);
}
