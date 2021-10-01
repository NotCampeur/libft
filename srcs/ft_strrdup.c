/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notcampeur <notcampeur@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:32:37 by ldutriez          #+#    #+#             */
/*   Updated: 2021/10/01 12:28:00 by notcampeur       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrdup(const char *head, const char *tail)
{
	char	*buff;
	size_t	length;

	if (head > tail)
		return (NULL);
	length = 1;
	while (head + length <= tail)
		length++;
	if (!(buff = (char *)malloc((length + 1) * sizeof(char))))
		return (NULL);
	while (head + --length >= head)
		buff[length] = head[length];
	return (buff);
}
