/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 12:29:00 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/22 21:51:37 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret_tab;

	i = 0;
	ret_tab = (int*)malloc(sizeof(*ret_tab) * length);
	while (i < length)
	{
		ret_tab[i] = f(tab[i]);
		i++;
	}
	return (ret_tab);
}
