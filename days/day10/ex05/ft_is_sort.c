/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:52:33 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/23 17:48:08 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int c;

	i = 1;
	if (length >= 3)
	{
		c = f(tab[0], tab[1]);
		while (i < length - 1)
		{
			if ((c > 0) && (f(tab[i], tab[i + 1] < 0)))
				return (0);
			else if ((c < 0) && (f(tab[i], tab[i + 1]) > 0))
				return (0);
			c = f(tab[i], tab[i + 1]);
			i++;
		}
	}
	return (1);
}
