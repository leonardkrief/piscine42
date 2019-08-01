/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:37:33 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 22:59:21 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while((i*i < nb) && (i < 46341))
	{
		i++;
	}
	if (i*i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

int     main(void)
{
    int n;
    int a;

    a = 46340*46340;
    n = ft_sqrt(a);
	printf("rac(%d) = %d \n", a, n);
}