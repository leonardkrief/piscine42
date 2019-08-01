/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:49:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/18 16:45:30 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	dest = (char *)(malloc(1 * (l + 1)));
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main (void)
{
	char s[] = "salam couzilknergnrn";
	printf("%d\n", ft_strlen(s));
	printf("%s\n", ft_strdup(s));
}