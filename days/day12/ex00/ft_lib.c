/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:04:29 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/25 18:34:30 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, s + i, 1);
		i++;
	}
}

void	ft_puterror(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(2, s + i, 1);
		i++;
	}
}

int		ft_display_file(char *path)
{
	char	buf[2];
	int		fd;

	buf[1] = '\0';
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("open() error");
		return (-1);
	}
	while (read(fd, buf, 1))
	{
		write(1, buf, 1);
	}
	if (close(fd) == -1)
	{
		ft_puterror("close() error");
		return (-1);
	}
	return (0);
}
