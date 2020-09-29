/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:53:55 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:24:28 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp1;

	tmp1 = *alst;
	if (tmp1 == NULL)
		*alst = new;
	else
	{
		while ((tmp1)->next)
			tmp1 = (tmp1)->next;
		(tmp1)->next = new;
	}
}
