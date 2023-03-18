/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:03 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/23 10:33:20 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	sort_big(t_stack *stack)
{
	quicksort_a_to_b(stack, --stack->regular_sort);
	quicksort_b_to_a(stack);
}

static void	sort_small(t_stack *stack)
{
	if (stack->size_a == 2)
		swap(&stack->a[0], &stack->a[1], 'a');
	else if (stack->size_a == 3)
		sort_three(stack->a, stack->size_a, 'a');
	else if ((stack->size_a == 5 || stack->size_a == 4))
		sort_five(stack);
}

static void	push_swap(t_stack *stack)
{
	if (stack->size_a <= 5 && sub_number(stack, (int)stack->size_a))
		sort_small(stack);
	else if (sub_number(stack, (int)stack->size_a))
		sort_big(stack);
}

// size_a : size of stack_a
// *a : stack a
// size_b : size of stack_b
// *b : stack b
// next : index of the next biggest number to push in stack b
// median : half global size
// block : half part needed for upgrade the the range of min and max
// upgrade : value to know when to upgrade the range
// min : minimal value of the range to push in stack a
// max : maximal value of the range to push in stack a
// regular_sort : quantity of numbers used in the principal quicksort part
// remaining_low : Small numbers remaining used in the alternative quicksort
// remaining_high : Big numbers remaining used in the alternative quicksort

static void	allocate_stack(t_stack *stack, int size)
{
	if (stack)
	{
		stack->size_a = size;
		stack->a = ft_calloc(size, sizeof(int));
		stack->size_b = 0;
		stack->b = ft_calloc(size, sizeof(int));
		stack->next = 0;
		stack->median = stack->size_a / 2;
		if (stack->size_a > 250)
			stack->block = 33;
		else
			stack->block = 15;
		stack->upgrade = stack->block * 2;
		stack->min = stack->median - stack->block;
		stack->max = stack->median + stack->block;
		stack->regular_sort = (stack->block * (stack->size_a / stack->block));
		stack->remaining_low = (stack->size_a - stack->regular_sort) / 2;
		stack->remaining_high = stack->size_a - stack->remaining_low;
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		count;
	int		is_single;

	is_single = 0;
	count = get_count(argc, argv, &is_single);
	if (count == -1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	allocate_stack(&stack, count);
	if (count != 0)
	{
		if (init_stack(&stack, argv, is_single))
			if (!ft_issorted_lefttoright(stack.a, stack.size_a))
				push_swap(&stack);
	}
	if (stack.a)
		ft_free_array(stack.a);
	if (stack.b)
		ft_free_array(stack.b);
	return (0);
}
