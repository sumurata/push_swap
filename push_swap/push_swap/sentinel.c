/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sentinel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumurata <sumurata@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:43:27 by sumurata          #+#    #+#             */
/*   Updated: 2024/05/30 16:56:11 by sumurata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*ft_make_sentinel(void)
{
	t_data	*sentinel;

	sentinel = (t_data *)malloc(sizeof(t_data));
	if (sentinel == NULL)
		return (1);
	sentinel->next = sentinel;
	sentinel->prev = sentinel;
	return (sentinel);
}
