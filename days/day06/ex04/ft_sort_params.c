/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:39:59 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/17 21:26:35 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s);

void	ft_swap_pointers(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	tri_decroissant(char **s)
{
	int		i;
	int		count;
	char	*c;

	count = 0;
	while (s[count] != '\0')
	{
		i = count;
		c = s[count];
		while (s[i] != '\0')
		{
			if (ft_strcmp(s[i], s[count]) < 0)
			{
				ft_swap_pointers(s + i, s + count);
			}
			i++;
		}
		count++;
	}
}

int		main(int argc, char **argv)
{
	tri_decroissant(argv);
	while (argc > 1)
	{
		ft_putstr(argv[argc]);
		argc--;
	}
	return (0);
}
