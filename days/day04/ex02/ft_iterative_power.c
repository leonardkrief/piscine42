/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:50:20 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 22:38:51 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;

	n = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (power >= 1)
		{
			n *= nb;
			power--;
		}
		return (n);
	}
}
