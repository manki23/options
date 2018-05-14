/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:09:20 by exam              #+#    #+#             */
/*   Updated: 2018/03/27 11:01:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
void	ft_putstr(char str[]);
void	ft_putnbr(int nb);

void	ft_fill_with_zero(int *tab, int size);
int		ft_fill_one(int *tab, char c);
int		ft_fill_arg(int *tab, char str[]);
void	ft_print_tab(int tab[], int size);

#endif
