/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_a_to_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:18 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/22 21:33:42 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// Quicksort moves adapted to project restrictions
static void	move_a_to_b(t_stack *stack)
{
	while (stack->a[0] != stack->next)
		rotate(stack->a, stack->size_a, 'a');
	push(stack, stack->a, stack->b, 'b');
	if (stack->b[0] < stack->median && stack->size_b > 1)
	{
		if (stack->a[0] < stack->min || stack->a[0] > stack->max
			|| stack->a[0] <= stack->remaining_low
			|| stack->a[0] >= stack->remaining_high)
			rotate_ab(stack);
		else
			rotate(stack->b, stack->size_b, 'b');
	}
}

// Kind of quicksort partitionning to find the way to turn and wich
// number (index) to push into stack b.
static void	find_smaller(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (stack->a[i] < stack->min || stack->a[i] > stack->max
		|| stack->a[i] <= stack->remaining_low
		|| stack->a[i] >= stack->remaining_high)
		i++;
	stack->next = stack->a[i];
}

// Quicksort adapted to project restrictions
void	quicksort_a_to_b(t_stack *stack, int times)
{
	if (stack->size_a)
	{
		if (times > 0)
		{
			if (stack->size_b == stack->upgrade)
			{
				stack->min -= stack->block;
				stack->max += stack->block;
				stack->upgrade += (stack->block * 2);
			}
			find_smaller(stack);
			move_a_to_b(stack);
		}
		else
		{
			push(stack, stack->a, stack->b, 'b');
			if (stack->b[0] <= (int)stack->remaining_low)
				rotate(stack->b, stack->size_b, 'b');
		}
		quicksort_a_to_b(stack, --times);
	}
}
