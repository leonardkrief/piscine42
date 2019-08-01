/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:41:04 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/25 12:01:04 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*rtn;

	rtn = 0;
	if (ac >= 2)
	{
		i = 1;
		while (i < ac)
		{
			tmp = ft_create_elem(av[i]);
			tmp->next = rtn;
			rtn = tmp;
			i++;
		}
	}
	return (rtn);
}
