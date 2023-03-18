/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_b_to_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:17:07 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/21 19:41:56 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// This fonction is use to know the way to rotate.
static bool	find_next(t_stack *stack, int *next)
{
	size_t	i;

	i = 0;
	next[0] = stack->size_b;
	while (stack->b[i] != next[0] && stack->size_b > 1)
		i++;
	if (i < stack->size_b / 2)
		return (1);
	return (0);
}

// This fonction sort and push all numbers from stack b to stack a.
void	quicksort_b_to_a(t_stack *stack)
{
	size_t	i;
	bool	way;
	int		next;

	while (stack->size_b)
	{
		i = 0;
		way = find_next(stack, &next);
		while (stack->b[i] != next)
		{
			if (way)
				rotate(stack->b, stack->size_b, 'b');
			else
				rrotate(stack->b, stack->size_b, 'b');
			if (stack->b[0] == next - 1)
				push(stack, stack->a, stack->b, 'a');
		}
		push(stack, stack->a, stack->b, 'a');
		if (stack->a[0] > stack->a[1] && stack->size_a > 1)
			swap(&stack->a[0], &stack->a[1], 'a');
	}
}
