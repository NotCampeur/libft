/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:40:41 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:25:37 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	str = NULL;
	if (!s)
		return (NULL);
	else if (!f)
		return ((char *)s);
	i = ft_strlen(s);
	j = 0;
	if (!(str = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	while (s[j])
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
