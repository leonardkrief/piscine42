/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:06:43 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/22 21:18:52 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int plus_douze(int n)
{
    return (n += 12);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *t;

    t = (int*)(malloc(sizeof(*t) * length));
	i = -1;
	while(i++ < length - 1)
	{
		t[i] = f(tab[i]);
	}
	return (t);
}

int main(void)
{

    int (*f)(int);
    int *t;
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = -1;

    f = &plus_douze;
    t = ft_map(tab, 10, f);
    while(i++ < 9)
    {
        printf("%d ", t[i]);
    }
}