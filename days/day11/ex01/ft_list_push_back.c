/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:43:17 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/24 23:22:36 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (*begin_list && begin_list)
	{
		tmp = (*begin_list);
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
