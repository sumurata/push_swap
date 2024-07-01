/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumurata <sumurata@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:29:18 by sumurata          #+#    #+#             */
/*   Updated: 2024/07/01 17:13:26 by sumurata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_allfree(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	while (i >= 0)
		free(args[i--]);
}

void	ft_display(char *str)
{
	char	*newline;

	if (str == NULL)
		return ;
	write(2, str, ft_strlen(str));
	newline = '\n';
	write(2, &newline, 1);
	exit(0);
}
