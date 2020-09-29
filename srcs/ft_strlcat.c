/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:38:04 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:32 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		dstlength;
	size_t		srclength;

	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	i = dstlength;
	j = 0;
	if (dstsize <= dstlength)
		return (srclength + dstsize);
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlength + srclength);
}
