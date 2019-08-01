/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:31:07 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/13 22:13:06 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int n)
{
	if ((n < 0) || (n > 12))
	{
		return (0);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * ft_recursive_factorial(n - 1));
	}
}
