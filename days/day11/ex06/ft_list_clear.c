/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:33:55 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/25 12:02:38 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aux(t_list **begin_list)
{
	t_list *tmp;

	tmp = *begin_list;
	if (tmp)
	{
		aux(&(tmp->next));
		free(tmp);
	}
}

void	ft_list_clear(t_list **begin_list)
{
	aux(begin_list);
	*begin_list = 0;
}
