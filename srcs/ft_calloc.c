/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:14:53 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:58 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_mem;

	allocated_mem = NULL;
	if (!(allocated_mem = malloc(count * size)))
		return (NULL);
	ft_bzero(allocated_mem, (count * size));
	return (allocated_mem);
}
