/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 04:13:57 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/23 21:33:39 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		if (!(list->next))
			tmp = 0;
		else
			tmp = list->next;
		free(list);
		list = tmp;
	}
	*begin_list = 0;
}
