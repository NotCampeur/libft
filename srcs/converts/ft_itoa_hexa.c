/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:33:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/05/27 17:25:13 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_converts.h"

char		*ft_itoa_hexa(long long int nbr)
{
	char	*base;
	char	*result;

	base = "0123456789abcdef";
	result = ft_itoa_base(nbr, base);
	return (result);
}
