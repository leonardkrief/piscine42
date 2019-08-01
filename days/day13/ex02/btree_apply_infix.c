/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:24:50 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/26 14:34:22 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_prefix(t_btree root->left, void (*applyf)(void *));
	if (root->item)
		applyf(root->item);
	if (root->right)
		btree_apply_prefix(t_btree root->right, void (*applyf)(void *));
}
