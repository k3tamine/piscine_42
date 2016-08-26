/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:37:27 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/25 14:53:00 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref
		, int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left && cmpf(data_ref, root->left->item) < 0)
			return (btree_search_item(root->left, data_ref, cmpf));
		if (!cmpf(data_ref, root->item))
			return (root);
		if (root->right && cmpf(data_ref, root->right->item) >= 0)
			return (btree_search_item(root->right, data_ref, cmpf));
		else
			return (0);
	}
	else
		return (0);
}
