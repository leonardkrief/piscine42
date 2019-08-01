/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:36:22 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/24 23:40:44 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_back(t_list **begin_list, t_list * after)
{
	t_list *tmp;
	
	if (*begin_list && begin_list)
	{
		tmp = (*begin_list);
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = after;
	}
	else
		*begin_list = after;
}

void	aux(t_list **begin_list)
{
	if (*begin_list)
	{
		ft_list_back(aux(&((*begin_list)->next)), *begin_list);
		begin_list = &((*begin_list)->next;
	}
}
