/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:28:36 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/17 23:09:47 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
	void *item, int (*cmpf)(void *, void *))
{
	if (*root == 0)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (*root != 0)
	{
		if ((*cmpf)(item, *root) > 0)
			btree_insert_data(&(*root)->left, item, (*cmpf));
		else
			btree_insert_data(&(*root)->right, item, (*cmpf));
	}
	return ;
}
