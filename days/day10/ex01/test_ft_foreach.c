/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:06:43 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/22 20:56:28 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void plus_douze(int *n)
{
    *n += 12;
}

void    ft_foreach(int *tab, int length, void(*f)(int*))
{
	int i;

	i = -1;
	while(i++ < length - 1)
	{
		f(tab + i);
	}
}

int main(void)
{

    void (*f)(int*);
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = -1;

    f = &plus_douze;
    ft_foreach(tab, 10, f);
    while(i++ < 9)
    {
        printf("%d ", tab[i]);
    }
}