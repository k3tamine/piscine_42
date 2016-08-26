/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 05:28:21 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/25 03:55:15 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_first(t_list **begin_list
		, t_list *list, t_list *tmp, t_list *tmp2)
{
	list->next = tmp2;
	tmp->next = list;
	list = tmp;
	*begin_list = list;
}

void	ft_swap_middle(t_list **begin_list,
		t_list *before, t_list *list, t_list *tmp)
{
	t_list	*tmp2;

	tmp2 = tmp->next;
	before->next = tmp;
	tmp->next = list;
	list->next = tmp2;
	*begin_list = before;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*before;
	int		i;

	i = 0;
	list = *begin_list;
	if (!list)
		return ;
	while (list->next)
	{
		if (cmp(list->data, list->next->data) > 0 && list)
		{
			if (!i)
				ft_swap_first(begin_list, list, list->next, list->next->next);
			else
				ft_swap_middle(begin_list, before, list, list->next);
			i++;
		}
		else
		{
			before = list;
			list = list->next;
		}
	}
}
