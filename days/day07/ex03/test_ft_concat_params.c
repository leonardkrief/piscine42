/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_concat_params.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:49:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/18 23:37:49 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>

int		ft_concat_strlen(int argc, char **argv)
{
	int i;
	int j;
	int n;

	i = 1;
	j = 0;
	n = 0;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			j++;
			n++;
		}
		i++;
		n++;
	}
	return (n);
}


char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int 	i;
	int 	j;
	int 	l;

    str = 0;
	i = 1;
	l = 0;
	if (i < argc)
		str = (char *)(malloc(1 * ft_concat_strlen(argc, argv) ));
	while (i < argc)
	{
	    j = -1;
		while (argv[i][++j] != '\0')
		{
			*(str + l) = argv[i][j];
			l++;
		}
		i++;
		if (i < argc)
			*(str + l) = '\n';
		else
			*(str + l) = '\0';
		l++;
	}
	return (str);
}

int main (int argc, char **argv)
{
	char *s;
	int i;

	s = ft_concat_params(argc, argv);
	printf("%s", s);
}