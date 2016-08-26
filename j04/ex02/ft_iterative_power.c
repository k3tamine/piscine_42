/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 21:54:28 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/08 20:25:07 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1 || nb == 1)
		return (nb);
	i = 0;
	res = 1;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
