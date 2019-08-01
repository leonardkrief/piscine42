/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:11:41 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/16 16:51:08 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int     main(void)
{
    char str1[] = "huifaghijkjebfws";
	char str2[] = "huiaghij";
	int i;

	printf("%d\n", strncmp(str1, str2, 6));
	printf("%d\n", ft_strncmp(str1, str2, 6));
	/* 
	ft_strncpy(s, c, 19);
	printf("%s\n", s);
	while (i < 30)
	{
		ft_putchar(s[i]);
		ft_putchar(48);
		printf("%d\n", i);
		i++;
	}
	*/
return (0);
}