/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lists.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:14:06 by ldutriez          #+#    #+#             */
/*   Updated: 2022/05/26 15:32:24 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LISTS_H
# define LIBFT_LISTS_H

/*
**	Needed to use malloc/free | size_t
*/
# include <stdlib.h>

/*
**	The t_list_node structure is designed to put any data in it as a void pointer.
**	The second variable is a pointer to the next t_list_node, in a chain of linked
**	lists.
*/
typedef struct s_list_node
{
	void				*data;
	struct s_list_node	*next;
}						t_list_node;

/*
**	The t_list is a pointer to the first t_list_node of a linked lists.
*/
typedef t_list_node *	t_list;

/*
**	The t_d_list_node is a data structure with a void pointer in it.
**	The second variable is a pointer to the next t_d_list_node.
**	The third variable is a pointer to the previous t_d_list_node.
**	Both the first and the last t_d_list_node are NULL.
*/
typedef struct s_d_list_node
{
	void				*data;
	struct s_list_node	*next;
	struct s_list_node	*prev;
}						t_d_list_node;

/*
**	The t_d_list is a pointer to the first t_d_list_node of a double linked lists.
*/
typedef t_d_list_node *	t_d_list;

/*
**	Allocating memory for a t_list_node pointer and filling it with data.
**	Then returns the t_list_node pointer.
*/
t_list_node			*ft_malloc_node(void *data);

/*
**	Adding a node at the end of a linked list. See libft_list_node.h for further
**	informations on t_list_node structure.
*/
void				ft_list_add_back(t_list_node **list, t_list_node *node);

/*
**	Adding a node at the start of a linked list. See libft_list_node.h for further
**	informations on t_list_node structure.
*/
void				ft_list_add_front(t_list_node **list, t_list_node *node);

/*
**	Completely erase each node.
**	The deletion of the data is handled by the second argument.
*/
void				ft_list_clear(t_list_node **list,
						void (*destructor)(void*));

/*
**	Applying a function to all the list's datas.
*/
void				ft_list_iter(t_list_node *list, void (*function)(void*));

/*
**	Applying a function to all the nodes of a list and returning a new list
**	with the new datas. If the function fails, destroy the new list and returns
**	NULL.
*/
t_list_node			*ft_list_map(t_list_node *list, void *(*function)(void*),
						void (*destructor)(void*));

/*
**	Counting the number of nodes in a list and returning it.
*/
int					ft_list_size(t_list_node *list);

/*
**	Removing a node of a list (specified by node_index), and reforming the
**	list.
*/
void				ft_list_remove_node(t_list_node **list, size_t node_index,
						void (*destructor)(void*));

#endif
