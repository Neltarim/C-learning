/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:06:20 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/22 03:16:05 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				my_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char			*my_strncat(char *dest, char *src, unsigned int nb)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	my_strncat(dest, src, size);
	return (my_strlen(dest));
}
