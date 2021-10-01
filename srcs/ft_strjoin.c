/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notcampeur <notcampeur@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:10:56 by ldutriez          #+#    #+#             */
/*   Updated: 2021/10/01 12:28:00 by notcampeur       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_treatment(char const *s1, char const *s2, char *new_s)
{
	size_t	i;
	size_t	j;
	size_t	size_s1;
	size_t	size_s2;

	i = 0;
	j = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	while (i < size_s1)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (j < size_s2)
	{
		new_s[i] = s2[j];
		i++;
		j++;
	}
	new_s[i] = '\0';
	return (new_s);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char *new_s;

	new_s = NULL;
	if (!s1 && !s2)
		return (NULL);
	else if (!s2)
		return ((char *)s1);
	else if (!s1)
		return ((char *)s2);
	if (!(new_s = (char *)malloc(sizeof(char)
		* (ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	new_s = ft_treatment(s1, s2, new_s);
	return (new_s);
}
