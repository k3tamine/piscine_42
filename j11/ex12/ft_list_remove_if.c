/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 04:20:14 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/23 04:59:08 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;

	list = *begin_list;
	while (list)
	{
		tmp = list->next;
		if (!(cmp(list->data, data_ref)))
		{
			tmp2->next = tmp;
			free(list);
		}
		tmp2 = list;
		list = tmp;
	}
}
