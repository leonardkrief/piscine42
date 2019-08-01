/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:36:32 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/25 11:56:54 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	if (!begin_list)
		return (0);
	tmp = begin_list;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
