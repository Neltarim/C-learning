/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemayer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 02:16:19 by alemayer          #+#    #+#             */
/*   Updated: 2018/07/25 09:39:12 by alemayer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

int		main(int argc, char **argv)
{
	int argnum;

	argnum = 1;
	if (argc < 2)
		ft_putchar('\n');
	while (argnum != argc)
	{
		my_putstr(argv[argnum]);
		ft_putchar('\n');
		argnum++;
	}
	return (0);
}
