/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:10:59 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/19 15:23:02 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*first_elem;

	first_elem = malloc(sizeof(*first_elem));
	first_elem->next = 0;
	first_elem->data = data;
	return (first_elem);
}
/*
**int	main(void)
**{
**int	i;
**
**i = 4;
**ft_create_elem(&i);
**return (0);
**}
*/
