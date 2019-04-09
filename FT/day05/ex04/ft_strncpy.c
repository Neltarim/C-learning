/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 04:15:26 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/25 04:16:02 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index])
	{
		if (src[index + 1] == '\0' && n != 0)
		{
			++index;
			while (src[index])
		}
		if (n == 0)
		{
			++index;
			dest[index] = '\0';
			break ;
		}
		dest[index] = src[index];
		index++;
		n--;
	}
	return (dest);
}
