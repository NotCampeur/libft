/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:12:55 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:24:24 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int n)
{
	char			*answer;
	int				i;
	long int		nbr;
	int				minus;

	answer = NULL;
	i = 1;
	nbr = n;
	minus = 0;
	while ((n >= 10 || n <= -10) && i++)
		n /= 10;
	minus = (nbr < 0) ? 1 : 0;
	nbr *= nbr < 0 ? -1 : 1;
	if (!(answer = malloc(sizeof(char) * i + 1 + minus)))
		return (NULL);
	answer[i + minus] = '\0';
	i = (!minus) ? i - 1 : i;
	while (nbr >= 10)
	{
		answer[i--] = nbr % 10 + 48;
		nbr /= 10;
	}
	answer[i] = nbr + 48;
	answer[0] = minus == 1 ? '-' : answer[0];
	return (answer);
}
