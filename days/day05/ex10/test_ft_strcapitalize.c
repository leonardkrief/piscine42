/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcapitalize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:11:41 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/16 23:39:19 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		is_low(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		is_cap(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		is_nb(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*capitalize_word(char *str, int l)
{
	int i;

	i = 1;
	if (is_low(str[0]))
	{
		str[0] = str[0] + 'A' - 'a';
	}
	while (i < l)
	{
		if (is_cap(str[i]))
		{
			str[i] = str[i] + 'a' - 'A';
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int l;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_low(str[i]) || is_cap(str[i]) || is_nb(str[i]))
		{
			l = 0;
			while (is_low(str[i + l]) || is_cap(str[i + l]) || is_nb(str[i + l]))
			{
				l++;
			}		
			capitalize_word(str + i, l);
			i = i + l - 1;
		}
		i++;
	}
	return (str);
}

int     main(void)
{
	char str1[] = "v890-[',mhu890-[;ju890p;";
	char str2[] = "huiaghij";
	int i;
	printf("%s\n", str1);
	printf("%s\n", capitalize_word(str1, 3));
	printf("%s\n", ft_strcapitalize(str1));
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