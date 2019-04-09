/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 04:18:35 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/22 02:42:18 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		scan_to_find(char *str, char *to_find, int index)
{
	int cmp;
	int temp_index;

	temp_index = index;
	cmp = 0;
	while (to_find[cmp])
	{
		if (to_find[cmp] != str[temp_index])
			return (0);
		else
		{
			cmp++;
			temp_index++;
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int index;

	index = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[index])
	{
		if (str[index] == to_find[0])
		{
			if (scan_to_find(str, to_find, index) == 1)
				return (str + index);
			else
				index++;
		}
		else
			index++;
	}
	return (0);
}
