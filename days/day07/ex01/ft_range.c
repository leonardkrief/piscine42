/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:08:16 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/18 17:34:51 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *s;

	i = 0;
	s = 0;
	if (max - min > 0)
	{
		s = (int *)(malloc(sizeof(int) * (max - min)));
	}
	while (i < (max - min))
	{
		s[i] = min + i;
		i++;
	}
	return (s);
}
