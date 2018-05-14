/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:08:34 by exam              #+#    #+#             */
/*   Updated: 2018/05/14 15:52:26 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_error(char str[])
{
	ft_putstr(str);
	ft_putchar('\n');
	return (-1);
}

int		main(int ac, char *av[])
{
	int		i;
	int		tab[32];

	ac--;
	av++;
	if (ac > 0)
	{
		ft_fill_with_zero(tab, 32);
		i = -1;
		while (++i < ac)
		{
			if (av[i][0] == '-' && av[i][1] == 'h')
				return (ft_error("options: abcdefghijklmnopqrstuvwxyz"));
			if (av[i][0] == '-' && !ft_fill_arg(tab, av[i]) &&
					!(av[i][0] == '-' && av[i][1] == '\0'))
				return (ft_error("Invalid Option"));
		}
		ft_print_tab(tab, 32);
	}
	else
		return (ft_error("options: abcdefghijklmnopqrstuvwxyz"));
	return (0);
}
