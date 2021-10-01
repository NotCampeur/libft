/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notcampeur <notcampeur@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:17:02 by ldutriez          #+#    #+#             */
/*   Updated: 2021/10/01 12:28:00 by notcampeur       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;
	unsigned int nb;

	nbr = 0;
	nb = 0;
	if (fd >= 0)
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			nbr = (unsigned int)n * -1;
		}
		else if (n >= 0)
			nbr = (unsigned int)n;
		if (nbr >= 10)
			ft_putnbr_fd(nbr / 10, fd);
		nb = nbr % 10 + '0';
		write(fd, &nb, 1);
	}
}
