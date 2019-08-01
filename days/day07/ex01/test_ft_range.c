/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:49:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/18 17:08:32 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *s;

	i = 0;
	s = 0;
	if (max - min > 0)
	{
		s = (int *)(malloc(sizeof(*s) * (max - min)));
	}
	while (i < (max - min))
	{
		s[i] = min + i;
		i++;
	}
	return (s);
}

int main (void)
{
	int i = 0;
	int min = -12;
	int max = 10;
	int *s = ft_range(min, max);
	while (i <= (max - min))
	{
		printf("| %d ", s[i]);
		i++;
	}
}