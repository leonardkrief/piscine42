/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:11:41 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/16 17:07:06 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i=0;
	while(str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}

int     main(void)
{
    char str1[] = "huiEREkjebfy40-5ws";
	char str2[] = "huiaghij";
	int i;

	printf("%s\n", ft_strupcase(str1));
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