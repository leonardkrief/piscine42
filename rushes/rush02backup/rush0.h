/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 16:34:02 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 16:40:07 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH0_H
# define RUSH0_H

void	stores_line(char a, char b, char c, int l, char *s);

char	*test_rush_00_good(int l, int h, int i);

char	*test_rush_00_error(void);

char	*test_rush_00(int l, int h);

char	*test_rush_01_good(int l, int h, int i);

char	*test_rush_01_error(void);

char	*test_rush_01(int l, int h);

char	*test_rush_02_good(int l, int h, int i);

char	*test_rush_02_error(void);

char	*test_rush_02(int l, int h);

char	*test_rush_03_good(int l, int h, int i);

char	*test_rush_03_error(void);

char	*test_rush_03(int l, int h);

char	*test_rush_04_good(int l, int h, int i);

char	*test_rush_04_error(void);

char	*test_rush_04(int l, int h);

#endif
