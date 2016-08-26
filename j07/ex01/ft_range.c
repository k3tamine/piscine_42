/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 07:16:33 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/11 09:08:44 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret_tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	ret_tab = (int *)malloc(sizeof(*ret_tab) * (max - min));
	while (min < max)
	{
		ret_tab[i] = min;
		min++;
		i++;
	}
	return (ret_tab);
}
