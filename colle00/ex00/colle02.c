/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 16:58:58 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/07 23:11:14 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_first_last(int x, int first)
{
	int	i;

	i = 1;
	if (first == 1)
		ft_putchar('A');
	else
		ft_putchar('C');
	while (i <= x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		if (first == 1)
			ft_putchar('A');
		else
			ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_print_regular_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('B');
	while (i <= x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	else if (i == x)
		ft_putchar('\n');
}

void	colle(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y && x > 0)
	{
		if (i == 1 || i == y)
		{
			ft_print_first_last(x, i);
		}
		else
		{
			ft_print_regular_line(x);
		}
		i++;
	}
}
