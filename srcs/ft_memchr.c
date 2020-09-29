/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:00:53 by ldutriez          #+#    #+#             */
/*   Updated: 2019/10/17 19:24:50 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*nstr;
	size_t			i;

	nstr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (nstr[i] == (unsigned char)c)
			return (nstr + i);
		i++;
	}
	return (0);
}
