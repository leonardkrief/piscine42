/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:41:04 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/24 20:05:40 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*rtn;

rtn = 0;
	if (ac >= 2)
	{
		i = 1;
		while(i < ac)
		{
			tmp = ft_create_elem((char *)av[i]);
			tmp->next = rtn;
			rtn = tmp;
			i++;
		}
	}
	return (rtn);
}

void	ft_print_list(t_list *ls)
{
	while (ls)
	{
		printf("%s\n", ls->data);
		ls = ls->next;
	}
}


int		main(int ac, char** av)
{
	t_list *begin;

	begin = ft_list_push_params(ac, av);
	ft_print_list(begin);
}
