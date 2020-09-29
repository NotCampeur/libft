/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:08:45 by ldutriez          #+#    #+#             */
/*   Updated: 2019/10/11 18:11:06 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (needle[0] == haystack[i])
		{
			n = 1;
			while (needle[n] != '\0' &&
				haystack[i + n] == needle[n] && ((i + n) < len))
				n++;
			if (needle[n] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
