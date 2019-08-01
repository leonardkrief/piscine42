/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:00:15 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/25 11:55:14 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (begin_list && *begin_list)
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		begin_list = &tmp;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
