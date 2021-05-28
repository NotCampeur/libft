/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 03:58:39 by user42            #+#    #+#             */
/*   Updated: 2021/05/28 03:58:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

void	ft_list_clear(t_list_node **list, void (*destructor)(void*))
{
	t_list_node	*tmp;

	if (*list == NULL)
		return ;
	while (*list != NULL)
	{
		tmp = *list;
		(*destructor)(tmp->data);
		*list = tmp->next;
		free(tmp);
	}
}
