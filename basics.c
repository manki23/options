/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:44:40 by exam              #+#    #+#             */
/*   Updated: 2018/03/27 10:55:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char str[])
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_recursive_print(int nb)
{
	if (nb <= -10 || nb >= 10)
	{
		ft_recursive_print(nb / 10);
		ft_recursive_print(nb % 10);
	}
	else if (nb < 0)
		ft_putchar('0' - nb);
	else
		ft_putchar('0' + nb);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	ft_recursive_print(nb);
}
