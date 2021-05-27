/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_node_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 08:24:59 by ldutriez          #+#    #+#             */
/*   Updated: 2020/10/16 09:27:33 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

void	ft_list_add_back(t_list_node **list, t_list_node *node)
{
	if (node == NULL || list == NULL)
		return ;
	if (*list == NULL)
	{
		*list = node;
		return ;
	}
	while ((*list)->next != NULL)
		(*list) = (*list)->next;
	(*list)->next = node;
}
