/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:03:10 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:06 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL && fd >= 0)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
