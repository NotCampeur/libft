/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 03:57:57 by user42            #+#    #+#             */
/*   Updated: 2021/05/28 03:57:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

t_list_node	*ft_list_map(t_list_node *list, void *(*function)(void *),
void (*destructor)(void *))
{
	t_list_node	*result;
	t_list_node	*new_node;

	if (list == NULL)
		return (NULL);
	result = ft_malloc_node((*function)(list->data));
	if (result == NULL)
		return (NULL);
	list = list->next;
	while (list != NULL)
	{
		new_node = ft_malloc_node((*function)(list->data));
		if (new_node == NULL)
		{
			ft_list_clear(&result, destructor);
			return (NULL);
		}
		ft_list_add_back(&result, new_node);
		list = list->next;
	}
	return (result);
}