/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 17:33:26 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/17 23:25:10 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argv[0] != '\0')
	{
		while (argv[i] != '\0')
		{
			ft_putstr(argv[i]);
			i++;
			if (argv[i] != '\0')
			{
				ft_putchar('\n');
			}
		}
		return (0);
	}
}
