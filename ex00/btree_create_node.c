/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:28:36 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/17 21:49:53 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_elem;

	new_elem = malloc (sizeof(t_btree));
	new_elem->item = item;
	new_elem->left = 0;
	new_elem->right = 0;
	return (new_elem);
}
