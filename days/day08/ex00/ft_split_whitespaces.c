/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:06:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/19 16:57:49 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int nb_words(char *str)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while(str[i] != '\0')
	{
		while((str[i] == ' ') || (str[i] == '\t' ) || (str[i] == '\n')) 
		{
			i++;
		}
		while ((str[i] != '\0') && (str[i + 1] != ' ') && (str[i + 1] != '\t' ) && (str[i + 1] != '\n') && (str[i + 1] != '\0'))
		{
			i++;
		}
		i++;
		n++;
	}
	return (n);
}

int *nb_letters(char *str)
{
	int *t;
	int a[3];

	a[0] = 0;
	a[2] = 0;
	t = (int *)malloc(sizeof(*t) * (nb_words(str) + 1));
	t[0] = nb_words(str);
	while(str[i] != '\0')
	{
		a[1] = 1;
		while((str[a[0]] == ' ') || (str[a[0]] == '\t' ) || (str[a[0]] == '\n'))
		{
			a[0]++;
		}
		while ((str[a[0]] != '\0') && (str[a[0] + 1] != ' ') && (str[a[0] + 1] != '\t' ) && (str[a[0] + 1] != '\n') && (str[a[0] + 1] != '\0'))
		{
			a[0]++;
			a[1]++;
		}
		t[a[2] + 1] = n;
		a[0]++;
		a[2]++;
	}
	return (t);
}

// a[0] parcourt toute ma string, a[1] correspond au nombre de lettres dans un mot, a[2] parcourt mon tableau dans leauel je stocke le nb de lettres des mots.
// je renvois t ou t[0] = nb_mots et t[i] = nb_lettres du mot numero i.

char	**ft_split_whitespaces(char *str)
{
	char **dest;
	int *t;
	int i;
	int d;

	d = 0;
	i = 0;
	t = nb_letters(str);
	dest = (char**)(malloc(sizeof(*dest) * t[0]));
	while(str[i] != '\0')
	{
		while(d < t[0])
		{
			dest[d] = (char *)(malloc(sizeof(**dest) * t[d + 1]));
			while(t[d + 1] > 0)
			{
				dest[d] = str[i];
				i++;
			}



