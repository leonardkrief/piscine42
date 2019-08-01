/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:24:50 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/26 16:58:00 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root->item)
		applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, &applyf);
	if (root->right)
		btree_apply_prefix(root->right, &applyf);
}
