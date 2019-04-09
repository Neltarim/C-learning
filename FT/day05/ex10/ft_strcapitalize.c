/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 05:53:42 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/23 22:51:52 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strlowcase_modified(char *str)
{
	int index;

	index = 1;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	strlowcase_modified(str);
	while (str[index])
	{
		if (str[index] <= 'a' || str[index] >= 'z')
		{
			++index;
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] -= 32;
				++index;
			}
		}
		index++;
	}
	return (str);
}
