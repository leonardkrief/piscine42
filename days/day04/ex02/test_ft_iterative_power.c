/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_iterative_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:24:39 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 22:34:12 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	ft_iterative_power(int nb, int power)
{
	int n;

	n = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (power >= 1)
		{
			n *= nb;
			power--;
		}
		return (n);
	}
}

int     main(void)
{
    int n;
	int a;
	int b;
	time_t t;

    t = time(NULL);
	printf("Il est %ld \n", t);
	a = 11;
	b = 2;
	t = time(NULL);
	n = ft_iterative_power(a,b);
	t = time(NULL);
    printf("%d^%d = %d \n", a, b, n);
	printf("Il est %ld \n", t);
}
