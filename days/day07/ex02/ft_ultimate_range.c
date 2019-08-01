/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:09:52 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/18 17:35:21 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
