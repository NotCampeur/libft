/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:00:41 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:49 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		is_unwanted(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		locate_the_start(char const *s1, char const *set)
{
	int i;
	int start;

	i = 0;
	start = 0;
	while (is_unwanted(s1[i], set) && s1[i] != '\0')
	{
		i++;
	}
	start = i;
	return (start);
}

static int		locate_the_end(char const *s1, char const *set)
{
	int end;
	int end_s1;

	end = 0;
	end_s1 = ft_strlen(s1);
	while (is_unwanted(s1[end_s1 - 1], set) &&
		end_s1 != locate_the_start(s1, set))
	{
		end_s1--;
		end = end_s1;
	}
	return (end == 0 ? ft_strlen(s1) : end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	int		i;
	int		start;
	int		end;

	new_s = NULL;
	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	end = locate_the_end(s1, set);
	start = locate_the_start(s1, set);
	if (!(new_s = malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	while (start < end)
	{
		new_s[i] = s1[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}
