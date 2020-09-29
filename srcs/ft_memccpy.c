/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:05:57 by ldutriez          #+#    #+#             */
/*   Updated: 2019/10/11 13:37:40 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*nsrc;
	unsigned char	*ndst;

	i = 0;
	nsrc = (unsigned char *)src;
	ndst = (unsigned char *)dst;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		if (ndst[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
