/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 03:11:09 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/23 04:13:14 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		size;

	size = 0;
	if (!(begin_list))
		return (0);
	list = begin_list;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
