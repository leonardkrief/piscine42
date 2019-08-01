/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:41:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/22 21:50:56 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_a(char* s)
{
	int i;

	i = 0;
	while(s[i])
	{
		if (s[i] == 'g')
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while(tab[i])
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}

int		main(int argc, char** argv)
{
	int (*f)(char*);

	f = &is_a;
	printf("%d", ft_count_if(argv, f));
}
