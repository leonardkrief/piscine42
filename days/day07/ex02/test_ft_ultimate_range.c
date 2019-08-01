/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ultimate_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:49:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/18 17:42:34 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = 0;
	if ((max - min) > 0)
	{
		*range = (int *)(malloc(sizeof(int) * (max - min)));
	}
	while (i < (max - min))
	{
		*(*range + i) = min + i;
		i++;
	}
	return (sizeof(int) * i);
}

int main (void)
{
	int i = 123;
	int j = 0;
	int min = 10;
	int max = 23;
	int *p = &i;
	int **p2 = &p;

	i = ft_ultimate_range(p2, min, max);
	printf("%d\n", i);
	while (j <= (max - min))
	{
		printf("| %d ", *(*p2 + j));
		j++;
	}
}