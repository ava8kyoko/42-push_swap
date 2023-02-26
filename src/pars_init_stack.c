/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_init_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:11 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/26 10:44:43 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// Add a new element to stack
static int	add_element(char *src, int *dest, int size_d)
{
	if (!is_valid_int(src))
		return (0);
	dest[size_d] = ft_atoi(src);
	if (ft_isduplicate(dest, size_d) == 1)
		return (0);
	return (1);
}

// Init stack from multiple arguments
static int	init_multi(size_t size, char **src, int *dest)
{
	size_t	i;

	if (size >= 2)
	{
		i = -1;
		while (++i < size)
		{
			if (!add_element(src[i + 1], dest, i))
				return (-1);
		}
		if (i == size)
			return (size);
	}
	return (0);
}

// Init stack from a single argument (string)
static int	init_single(char *src, int *dest, int size, int start)
{
	char	*stack;
	int		pos_arg;
	int		i;

	pos_arg = 0;
	i = 0;
	while (src[i])
	{
		while (ft_isspace(src[i]))
			i++;
		start = i;
		while (src[i] && !ft_isspace(src[i]))
			i++;
		stack = ft_strldup(&src[start], stack, i - start);
		if (!add_element(stack, dest, pos_arg++))
		{
			free(stack);
			return (-1);
		}
		free(stack);
	}
	if (size && pos_arg)
		return (1);
	return (-1);
}

int	init_stack(t_stack *stack, char **argv, int is_single)
{
	int	ret;

	if (is_single == 1)
		ret = init_single(argv[1], stack->a, stack->size_a, 0);
	else
		ret = init_multi(stack->size_a, argv, stack->a);
	if (ret == -1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
