/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:26:44 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/22 17:55:42 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*dest;

	i = 0;
	l = ft_strlen(src);
	dest = (char *)(malloc(sizeof(1) * (l + 1)));
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
