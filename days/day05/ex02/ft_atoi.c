/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:49:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/15 21:50:25 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		aux(char *str, int nb, int i)
{
	if ((str[i] == '\0') || (str[i] > '9') || (str[i] < '0'))
	{
		return (nb);
	}
	else
	{
		return (aux(str, 10 * nb + str[i] - '0', i + 1));
	}
}

int		ft_atoi(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ')
	{
		printf("%d\n", i);
		i++;
	}
	if (str[i] == '+')
	{
		return (aux(str + i + 1, 0, 0));
	}
	else if (str[i] == '-')
	{
		return (-aux(str + i + 1, 0, 0));
	}
	else
	{
		return (aux(str + i, 0, 0));
	}
}
