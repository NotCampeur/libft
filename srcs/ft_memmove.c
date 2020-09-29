/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:39:57 by ldutriez          #+#    #+#             */
/*   Updated: 2019/10/18 03:00:50 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ndst;
	unsigned char	*nsrc;

	if (!dst && !src)
		return (NULL);
	i = 0;
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if (nsrc < ndst)
		while (++i <= len)
			ndst[len - i] = nsrc[len - i];
	else
		while (len-- > 0)
			*(ndst++) = *(nsrc++);
	return (dst);
}
