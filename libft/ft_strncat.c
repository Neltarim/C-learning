/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:11:27 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/22 03:09:28 by alemayer         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index;
	int index_src;

	index = my_strlen(dest);
	index_src = 1;
	dest[index] = src[0];
	index++;
	while (src[index_src])
	{
		if (nb == 1)
			break ;
		dest[index] = src[index_src];
		index++;
		index_src++;
		nb--;
	}
	dest[index] = '\0';
	return (dest);
}
