/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:43:48 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:24:50 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	lst_size = 1;
	tmp = lst;
	while ((tmp)->next != NULL)
	{
		lst_size++;
		tmp = (tmp)->next;
	}
	return (lst_size);
}
