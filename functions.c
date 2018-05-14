/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:11:52 by exam              #+#    #+#             */
/*   Updated: 2018/03/27 11:09:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_fill_with_zero(int *tab, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		tab[i] = 0;
}

int		ft_fill_one(int *tab, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		tab[c - 'a'] = 1;
		return (1);
	}
	else
		return (0);
}

int		ft_fill_arg(int *tab, char str[])
{
	int		i;
	int		ret;

	i = 1;
	ret = 0;
	while (str[i] && (ret = ft_fill_one(tab, str[i])))
		i++;
	return (ret);
}

void	ft_print_tab(int tab[], int size)
{
	int		i;

	i = size;
	while (--i >= 0)
	{
		ft_putnbr(tab[i]);
		if (!(i % 8) && i)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}








