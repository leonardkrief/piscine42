/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:11:41 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/16 16:00:27 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
        {
            return (str + i);
        }
        i ++;
    }
    return (0);
}

int     main(void)
{
    char str1[] = "Hellojfyguyiuyui";
	char str2[] = "sdgiuvisudgbvoie";
	printf("%s\n", str1);
	printf("%s\n", ft_strstr(str1, str2));
    return (0);
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
}