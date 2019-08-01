/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:24:50 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/26 14:35:35 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_prefix(t_btree root->left, void (*applyf)(void *));
	if (root->right)
		btree_apply_prefix(t_btree root->right, void (*applyf)(void *));
	if (root->item)
		applyf(root->item);
}
