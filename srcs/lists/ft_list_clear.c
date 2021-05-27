/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_nodeclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:47:03 by tguilbar          #+#    #+#             */
/*   Updated: 2020/02/25 11:13:35 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

void	ft_list_clear(t_list_node **list, void (*destructor)(void*))
{
	t_list_node *tmp;

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
