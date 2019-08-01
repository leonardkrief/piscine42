/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:24:50 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/26 16:38:11 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (*root = 0)
		*root = btree_create_node(item);
	else if ((*root->item) && (cmpf((*root)->item, item) >= 0))
	{
		btree_insert_data(&((*root)->right), item, int (*cmpf)(void *, void *));
	}
	else if ((*root->item) && (cmpf((*root)->item, item) < 0))
	{
		btree_insert_data(&((*root)->left), item, int (*cmpf)(void *, void *));
	}
}
