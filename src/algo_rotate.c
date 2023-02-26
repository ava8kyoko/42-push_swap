/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:03:52 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/11 16:18:42 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	shift(int *array, int dest, int src, char reverse)
{
	int		temp;
	int		i;

	temp = array[src];
	if (reverse == 'r')
	{
		i = src + 1;
		while (dest < src && --i > dest)
			array[i] = array[i - 1];
	}
	else
	{
		i = -1;
		while (dest > src && ++i < dest)
			array[i] = array [i + 1];
	}
	array[dest] = temp;
}

/*
** ra (rotate a): Shift up all elements of stack a by 1.
** 	The first element becomes the last one.
** rb (rotate b): Shift up all elements of stack b by 1.
** 	The first element becomes the last one.
*/
void	rotate(int *stack, int size, char stack_flag)
{
	if (size >= 2)
	{
		shift(stack, size - 1, 0, 0);
		write_rotate(stack_flag);
	}
}

/*
** rr : ra and rb at the same time.
*/
void	rotate_ab(t_stack *stack)
{
	if (stack->size_a >= 2 && stack->size_b >= 2)
	{
		rotate(stack->a, stack->size_a, 0);
		rotate(stack->b, stack->size_b, 0);
		write_rotate('c');
	}
}

/*
** rra (reverse rotate a): Shift down all elements of stack a by 1.
** 		The last element becomes the first one.
** rrb (reverse rotate b): Shift down all elements of stack b by 1.
** 		The last element becomes the first one.
*/
void	rrotate(int *stack, int size, char stack_flag)
{
	shift(stack, 0, size - 1, 'r');
	write_rrotate(stack_flag);
}

/*
** rrr : rra and rrb at the same time
*/
void	rrotate_ab(t_stack *stack)
{
	rrotate(stack->a, stack->size_a, 0);
	rrotate(stack->b, stack->size_b, 'c');
}
