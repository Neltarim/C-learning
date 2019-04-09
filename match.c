/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 22:20:47 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/16 00:50:22 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	int index;
	int index2;

	index = 0;
	index2 = 0;
	while (s1[index])
	{
		if (s2[index2] == '*')
		{
			index2++;
			while (s1[index] != s2[index2])
			{
				index++;
				if (s1[index] == '\0')
					return (0);
			}
		}
		if (s1[index] != s2[index2])
			return (0);
		index++;
		index2++;
	}
	return (1);
}
