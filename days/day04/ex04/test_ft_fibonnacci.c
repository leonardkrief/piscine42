/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_fibonnacci.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:05:48 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 22:33:51 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int     main(void)
{
    int n;
    int a;

    a = -5;
    while (a <= 12)
    {
        n = ft_fibonacci(a);
	    printf("f_%d = %d \n", a, n);
        a++;
	}
	a = 4000000000;
	printf("%d \n", a);
}