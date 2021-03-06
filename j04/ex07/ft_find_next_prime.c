/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 03:22:16 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/09 04:39:36 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb == 2)
		return (2);
	while ((i - 1) * i <= nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	return (nb);
}
