/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 21:49:45 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/08 20:31:56 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 13 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (nb);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
