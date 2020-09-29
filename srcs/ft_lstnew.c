/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:10:58 by ldutriez          #+#    #+#             */
/*   Updated: 2020/02/24 14:24:48 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_elem;

	if (!(new_elem = malloc(sizeof(t_list))))
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}
