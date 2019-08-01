/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_is_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:01:22 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 23:28:18 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	int z;

	i = 2;
	z = 1;
    if ((nb == 0) || (nb == 1))
    {
        return (0);
    }
	while((i < 46341) && (i*i <= nb) && (z == 1))
	{
		if ((nb % i) == 0)
		{
			z = 0;
		}
		i++;
    }
	return (z);
}

int     main(void)
{
    int a;

    a = 0;
    while (a < 100)
    {
	    printf("%d est premier: %d \n", a, ft_is_prime(a));
        a++;
    }
}
