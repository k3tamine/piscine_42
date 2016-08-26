/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 13:59:14 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/23 05:06:07 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*back;

	back = *begin_list;
	if (back == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (back->next)
			back = back->next;
		back->next = ft_create_elem(data);
	}
}
