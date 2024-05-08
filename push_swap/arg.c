/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumurata <sumurata@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:53:00 by sumurata          #+#    #+#             */
/*   Updated: 2024/05/08 14:30:04 by sumurata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_display(char *str)
{
	ft_putendl_fd(str, 1);
	exit(0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-' || num[0] == '+')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_errargs(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**args;

	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (argv[i])
	{
		tmp = ft_atoi(argv[i]);
		if (ft_isnum(args[i]) == 1)
			ft_display("Error");
		if (tmp < INT_MAX || tmp > INT_MIN)
			ft_display("Error");
		i++;
	}
	if (argc == 2)
		ft_free(args);
}
