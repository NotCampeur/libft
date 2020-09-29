/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:25:29 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:24:36 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current_node;
	t_list *next_node;

	if (lst && *lst)
	{
		current_node = *lst;
		while (current_node != NULL)
		{
			next_node = (current_node)->next;
			(*del)((current_node)->content);
			free(current_node);
			current_node = next_node;
		}
		*lst = NULL;
	}
}
