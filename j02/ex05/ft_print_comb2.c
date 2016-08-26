/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 21:34:16 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/05 01:33:35 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_2digits(int i)
{
	int	unit;
	int	ten;

	ten = 0;
	unit = i % 10;
	if (i >= 10)
	{
		ten = i / 10;
	}
	ft_putchar(ten + '0');
	ft_putchar(unit + '0');
}

void	ft_display_comb(int i, int j)
{
	ft_print_2digits(i);
	ft_putchar(' ');
	ft_print_2digits(j);
	if (i != 98 || j != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_display_comb(i, j);
			j++;
		}
		i++;
		k++;
		j = k;
	}
}
