/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 14:57:38 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/19 00:26:29 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a / b);
}

int		ft_mod(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a % b);
}
