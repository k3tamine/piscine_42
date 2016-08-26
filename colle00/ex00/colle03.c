/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 17:01:46 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/20 16:34:00 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_first_last(int x)
{
	int	i;

	i = 1;
	ft_putchar('A');
	while (i <= x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
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
			ft_print_first_last(x);
		}
		else
		{
			ft_print_regular_line(x);
		}
		i++;
	}
}
