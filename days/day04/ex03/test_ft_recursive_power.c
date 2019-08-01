/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_recursive_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 18:37:42 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 22:19:43 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

int     main(void)
{
    int n;
    int a;
    int b;

    a = 0;
    b = 0;
    while (a <= 20)
    {
        while (b <= 20)
        {
            n = ft_recursive_power(a, b);
	        printf("%d^%d = %d \n", a, b, n);
            b++;
        }
		b = 0;
		a++;
	}
}