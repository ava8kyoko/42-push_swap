/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:22 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/21 20:22:50 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(int *stack, size_t size, char stack_flag)
{
	while (!(ft_issorted_lefttoright(stack, size)))
	{
		if (stack[0] > stack[1])
		{
			if (stack[0] > stack[2])
				rotate(stack, size, stack_flag);
			else
				swap(&stack[0], &stack[1], stack_flag);
		}
		else
			rrotate(stack, size, stack_flag);
	}
}

void	sort_five(t_stack *stack)
{
	int	median;

	median = stack->size_a - 3;
	while (stack->size_a > 3)
	{
		if (stack->a[0] <= median)
			push(stack, stack->a, stack->b, 'b');
		else
		{
			if (stack->a[stack->size_a - 1] < median)
				rrotate(stack->a, stack->size_a, 'a');
			else
				rotate(stack->a, stack->size_a, 'a');
		}
	}
	sort_three(stack->a, stack->size_a, 'a');
	while (stack->size_b)
		push(stack, stack->a, stack->b, 'a');
	if (stack->a[0] > stack->a[1])
		swap(&stack->a[0], &stack->a[1], 'a');
}
