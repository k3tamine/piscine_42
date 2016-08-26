/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 23:47:12 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/05 01:31:52 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	int	tmp;
	int	lenght;

	lenght = 1;
	if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-');
		nb--;
	}
	tmp = nb;
	while (tmp >= 10)
	{
		tmp /= 10;
		lenght *= 10;
	}
	while (lenght >= 1)
	{
		tmp = nb / lenght;
		nb %= lenght;
		lenght /= 10;
		ft_putchar(tmp + '0');
	}
}
