/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:57:06 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:23 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*allocated_mem;
	int		i;
	int		j;

	allocated_mem = NULL;
	i = ft_strlen(s1);
	j = 0;
	if (!(allocated_mem = malloc((i + 1) * sizeof(char))))
		return (NULL);
	while (j < i)
	{
		allocated_mem[j] = s1[j];
		j++;
	}
	allocated_mem[i] = '\0';
	return (allocated_mem);
}
