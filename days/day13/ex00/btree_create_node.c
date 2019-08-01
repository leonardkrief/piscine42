/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:16:54 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/26 14:22:47 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree *a;

	a = (t_btree *)(malloc(sizeof(*a));
	a->left = 0;
	a->right = 0;
	a->item = item;
	return (a);
}
