/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:12:57 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/21 15:46:11 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	else
	{
		while (nb >= 1)
		{
			n *= nb;
			nb--;
		}
		return (n);
	}
}

int		main(void)
{
	int n[5] = {1, 2, 3, 4, 5};
	int i;

	i = 0;
	while (i < 5)
	{
		printf("%d ", n[i]);
	}
	return (0);
}