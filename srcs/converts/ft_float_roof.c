/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_roof.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 13:11:18 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/27 17:24:55 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_converts.h"

float		ft_float_roof(float value)
{
	float	result;
	int		int_value;

	int_value = value;
	if (value == 0.0f)
		return (value);
	if (value < 0.0f)
	{
		result = int_value;
		return (result);
	}
	if (value - int_value == 0.0f)
	{
		result = value;
		return (result);
	}
	else
		result = int_value + 1;
	return (result);
}
