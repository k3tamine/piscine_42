/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 17:45:54 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/24 04:25:00 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_btree	*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = (t_btree *)malloc(sizeof(*btree));
	if (!btree)
		return (0);
	btree->left = 0;
	btree->right = 0;
	btree->item = item;
	return (btree);
}
