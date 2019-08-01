/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_any.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:30:00 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/22 21:46:02 by lkrief           ###   ########.fr       */
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

int		ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while(tab[i])
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char** argv)
{
	int (*f)(char*);

	f = &is_a;
	printf("%d", ft_any(argv, f));
}

