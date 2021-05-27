/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:55:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/05/27 17:33:15 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"

char	*ft_strsub(char *src, size_t start, size_t len)
{
	size_t	index;
	char	*result;

	index = 0;
	result = NULL;
	if (src == NULL || len == 0 || start + len > ft_strlen(src) )
		return (NULL);
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	while (index < len)
	{
		result[index] = src[start + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
