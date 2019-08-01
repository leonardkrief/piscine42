/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:28:00 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/25 18:45:01 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_display_file(argv[1]);
	}
	else if (argc < 2)
	{
		ft_puterror("File name missing.");
		return (-1);
	}
	else
	{
		ft_puterror("Too many arguments.");
		return (-1);
	}
}
