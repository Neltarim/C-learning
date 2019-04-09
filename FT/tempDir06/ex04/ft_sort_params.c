/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:14:56 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/25 08:25:22 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	my_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		my_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while ((s1[index] || s2[index]) && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

int		main(int argc, char **argv)
{
	int		index;
	char	*temp;

	if (argc < 2)
		return (0);
	index = 1;
	while (argv[index + 1])
	{
		if (my_strcmp(argv[index], argv[index + 1]) > 0)
		{
			temp = argv[index + 1];
			argv[index + 1] = argv[index];
			argv[index] = temp;
			index = 0;
		}
		index++;
	}
	index = 1;
	while (index < argc)
	{
		my_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
