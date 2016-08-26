/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 05:12:24 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/23 17:03:17 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;
	t_list	*list2;
	t_list	*tmp;

	list = *begin_list1;
	list2 = begin_list2;
	if (!list)
		return ;
	while (list)
	{
		tmp = list;
		list = list->next;
	}
	if (!list2)
		return ;
	while (list2)
	{
		tmp->next = list2;
		tmp = list2;
		list2 = list2->next;
	}
}
