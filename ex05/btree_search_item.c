/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:28:36 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/17 23:34:38 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
	void *data_ref, int (*cmpf)(void *, void *))
{
	if (root == 0)
		return (0);
	btree_search_item(root->left, data_ref, (*cmpf));
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root);
	btree_search_item(root->right, data_ref, (*cmpf));
}
