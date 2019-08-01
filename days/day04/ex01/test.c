/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:24:39 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 17:30:18 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int n)
{
	if ((n < 0) || (n > 16))
	{
		return (0);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * ft_recursive_factorial(n - 1));
	}
}

int     main(void)
{
    int n;

    n = ft_recursive_factorial(18);
    printf("n = %d \n", n);
}
