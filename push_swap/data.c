/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumurata <sumurata@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:36:29 by sumurata          #+#    #+#             */
/*   Updated: 2024/06/14 21:32:19 by sumurata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*ft_lstnew(int *value)
{
	t_data	*new_node;

	new_node = (t_data *)malloc(sizeof(t_data));
	if (new_node == NULL)
		return (1);
	new_node->value = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	ft_lstadd_front(t_data *sentinel, int *value)
{
	t_data	*new_node;
	t_data	*first;

	new_node = ft_lstnew(value);
	first = sentinel->next;
	new_node->next = first;
	new_node->prev = sentinel;
	sentinel->next = new_node;
	first->prev = new_node;
}

void	ft_lstadd_back(t_data *sentinel, int value)
{
	t_data	*new_node;
	t_data	*last;

	new_node = ft_lstnew(value);
	last = sentinel->prev;
	new_node->next = sentinel;
	new_node->prev = last;
	last->next = new_node;
	sentinel->prev = new_node;
}

void	ft_lstsize(t_data *s_sort)
{
	int	count;

	count = 0;
	while (s_sort != NULL)
	{
		count++;
		s_sort = s_sort->next;
	}
	return (count);
}
