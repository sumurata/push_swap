/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumurata <sumurata@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:03:08 by sumurata          #+#    #+#             */
/*   Updated: 2024/05/30 18:30:48 by sumurata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_initstack(t_data **stack, int argc, char **argv)
{
	t_data	*value;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		value = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(ft_make_sentinel(), value);
		i++;
	}
	if (argc == 2)
		ft_free(args);
}

int	main(int argc, char **argv)
{
	t_data	**stack_a;
	t_data	**stack_b;

	if (argc < 2)
		return (0);
	ft_errargs(argc, argv);
	stack_a = (t_data **)malloc(sizeof(t_data));
	stack_b = (t_data **)malloc(sizeof(t_data));
	*stack_a = NULL;
	*stack_b = NULL;
	initstack(stack_a, argc, argv);
}
