/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:11:27 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/23 04:04:50 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp_next;
	t_list	*tmp_next2;

	list = *begin_list;
	if (!list || !list->next)
		return ;
	tmp_next = list->next;
	tmp_next2 = tmp_next->next;
	tmp_next->next = list;
	list->next = 0;
	while (tmp_next2)
	{
		list = tmp_next;
		tmp_next = tmp_next2;
		tmp_next2 = tmp_next2->next;
		tmp_next->next = list;
	}
	*begin_list = tmp_next;
}
