/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:54:40 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:24:54 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*nsrc;
	unsigned char	*ndst;

	if (!dst && !src)
		return (NULL);
	i = 0;
	nsrc = (unsigned char*)src;
	ndst = (unsigned char*)dst;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}
