/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notcampeur <notcampeur@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:26:59 by ldutriez          #+#    #+#             */
/*   Updated: 2021/10/01 12:28:00 by notcampeur       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define I 0
#define J 1

static int		w_count(char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c)
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	if (i > 0 && str[i - 1] == c)
		count--;
	return (count);
}

static int		w_len(char *str, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char		**tab_null(void)
{
	char		**tab;

	if (!(tab = (char**)malloc(sizeof(char*))))
		return (NULL);
	tab[0] = NULL;
	return (tab);
}

static char		**treatment(char **tab, char *scp, char c, int iterators[])
{
	while (w_count(scp, c) > 0)
	{
		iterators[J] = 0;
		while ((*scp == c) && *scp)
			scp++;
		if (!(tab[iterators[I]] = malloc(sizeof(char) * (w_len(scp, c) + 1))))
			return (NULL);
		while ((*scp != c) && *scp)
		{
			tab[iterators[I]][iterators[J]] = *scp;
			iterators[J]++;
			scp++;
		}
		tab[iterators[I]][iterators[J]] = '\0';
		iterators[I]++;
	}
	tab[iterators[I]] = NULL;
	return (tab);
}

char			**ft_split(char const *str, char c)
{
	char	**tab;
	char	*scp;
	int		iterators[2];

	if (!str)
		return (tab_null());
	scp = (char*)str;
	if (!(tab = (char **)malloc(sizeof(char*) * (w_count(scp, c) + 1))))
		return (NULL);
	iterators[I] = 0;
	iterators[J] = 0;
	tab = treatment(tab, scp, c, iterators);
	if (tab == NULL)
	{
		while (tab[iterators[I]] != NULL)
		{
			free(tab[iterators[I]]);
			iterators[I]++;
		}
		free(tab);
		return (NULL);
	}
	else
		return (tab);
}
