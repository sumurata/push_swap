/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumurata <sumurata@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:34:51 by sumurata          #+#    #+#             */
/*   Updated: 2024/07/01 18:25:01 by sumurata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_data **stack)
{
	t_data	*head;
	t_data	*next;
	int		size;
	int		tmpvalue;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		ft_display("Error from swap");
	tmpvalue = head->value;
	head->value = next->value;
	next->value = tmpvalue;
	return (0);
}

int	sa(t_data **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	write(1, "sa", 2);
	return (0);
}

int	sb(t_data **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	write(1, "sb", 2);
	return (0);
}

int	ss(t_data **stack_a, t_data **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	write(1, "ss", 2);
	return (0);
}
