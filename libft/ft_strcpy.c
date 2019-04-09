/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 03:34:23 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/23 01:11:46 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index])
	{
		if (n == 0)
		{
			++index;
			dest[index] = '\0';
		}
		dest[index] = src[index];
		index++;
		n--;
	}
	return (dest);
}
