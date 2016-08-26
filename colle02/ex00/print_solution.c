/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharvol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 19:34:37 by lcharvol          #+#    #+#             */
/*   Updated: 2016/08/21 20:49:16 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_print(char *input, int width, int height)
{
	int i;

	i = 0;
	if (width <= 0 || height <= 0)
		ft_putstr("aucune");
	else
	{
		if (ft_strcmp(input, colle_00(width, height)) == 0)
			ft_print_solution(0, width, height, &i);
		if (ft_strcmp(input, colle_01(width, height)) == 0)
			ft_print_solution(1, width, height, &i);
		if (ft_strcmp(input, colle_02(width, height)) == 0)
			ft_print_solution(2, width, height, &i);
		if (ft_strcmp(input, colle_03(width, height)) == 0)
			ft_print_solution(3, width, height, &i);
		if (ft_strcmp(input, colle_04(width, height)) == 0)
			ft_print_solution(4, width, height, &i);
		if (i == 0)
			ft_putstr("aucune");
	}
	ft_putchar('\n');
}

void	ft_print_solution(int colle_nb, int width, int height, int *i)
{
	if (*i >= 1)
		ft_putstr(" || ");
	ft_putstr("[colle0");
	ft_putnbr(colle_nb);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(height);
	ft_putchar(']');
	*i += 1;
}
