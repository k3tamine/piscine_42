/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 23:30:24 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/10 07:05:20 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_nb_lenght(int nb)
{
	int	i;

	i = 1;
	while (nb > 9)
	{
		i *= 10;
		nb /= 10;
	}
	return (i);
}

int		ft_isneg(int nb)
{
	if (nb == -2147483648)
		nb++;
	nb *= (-1);
	ft_putchar('-');
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	tmp;
	int lenght;
	int	min_max;

	min_max = nb;
	if (nb < 0)
		nb = ft_isneg(nb);
	lenght = ft_nb_lenght(nb);
	while (lenght >= 1)
	{
		tmp = nb / lenght;
		nb %= lenght;
		lenght /= 10;
		if (min_max == -2147483648 && lenght < 1)
			ft_putchar(tmp + 1 + '0');
		else
			ft_putchar(tmp + '0');
	}
}
