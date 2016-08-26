/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 03:55:27 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/24 23:15:33 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*list_tmp;
	int		i;

	if (ac < 1)
		return (0);
	i = 0;
	list = ft_create_elem(av[i++]);
	while (i < ac)
	{
		list_tmp = list;
		list = ft_create_elem(av[i++]);
		list->next = list_tmp;
	}
	return (list);
}
