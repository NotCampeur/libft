/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:32:37 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:45 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
