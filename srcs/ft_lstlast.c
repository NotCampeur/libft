/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:48:30 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:24:43 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inludes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while ((tmp)->next != NULL)
	{
		tmp = (tmp)->next;
	}
	return (tmp);
}
