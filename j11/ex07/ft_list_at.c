/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 17:44:59 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/23 05:08:57 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	list = begin_list;
	if (!(list))
		return (0);
	i = 1;
	while (i <= nbr)
	{
		list = list->next;
		i++;
	}
	if (i - 1 == nbr)
		return (list);
	else
		return (0);
}
