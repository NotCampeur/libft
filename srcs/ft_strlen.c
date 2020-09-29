/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:21:12 by ldutriez          #+#    #+#             */
/*   Updated: 2019/10/07 15:56:55 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int		ft_strlen(const char *string)
{
	long int length;

	length = 0;
	while (string[length] != '\0')
		length++;
	return (length);
}
