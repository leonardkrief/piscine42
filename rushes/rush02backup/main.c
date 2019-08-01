/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 16:34:07 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 16:49:56 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "rush0.h"

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s" ,test_rush_00(atoi(argv[1]), atoi(argv[2])));
	return (0);
}


