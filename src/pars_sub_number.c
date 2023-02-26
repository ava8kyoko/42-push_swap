/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_sub_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:03:44 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/21 20:44:55 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// Return the index of the greatest number
static int	find_greatest_number(int *src, size_t size)
{
	size_t	greatest;
	size_t	i;

	greatest = 0;
	i = -1;
	while (++i < size)
	{
		if (src[i] > src[i + 1] && src[i] > src[greatest] && i < size)
			greatest = i;
	}
	if (src[i - 1] > src[greatest])
		greatest = i - 1;
	return (greatest);
}

// Return the index of the smallest number
static int	find_smallest_number(int *src, size_t size)
{
	size_t	smallest;
	size_t	i;

	smallest = 0;
	i = -1;
	while (++i < size)
	{
		if (src[i] < src[i + 1] && src[i] < src[smallest] && i < size)
			smallest = i;
	}
	if (src[i - 1] < src[smallest])
		smallest = i - 1;
	return (smallest);
}

// Return the index of the next smaller number (ascending order)
static int	find_next_smaller(int *src, size_t size, size_t greatest,
	size_t old)
{
	size_t	i;
	size_t	new;

	new = greatest;
	i = -1;
	while (++i < size)
	{
		if (src[i] > src[old] && src[i] < src[new])
			new = i;
	}
	return (new);
}

// Gives the new values starting with number 1 then increment to INT_MAX
static void	set_order(int *dest, int *src, size_t size)
{
	size_t	greatest;
	size_t	smaller;
	size_t	new;

	greatest = find_greatest_number(src, size);
	smaller = find_smallest_number(src, size);
	dest[smaller] = 1;
	new = 2;
	while (new <= size)
	{
		smaller = find_next_smaller(src, size, greatest, smaller);
		dest[smaller] = new++;
	}
}

int	sub_number(t_stack *stack, size_t size)
{
	int	*original;

	original = ft_calloc(size, sizeof(int));
	if (original)
	{
		ft_memcpy(original, stack->a, sizeof(int) * size);
		set_order(stack->a, original, size);
		free(original);
		return (1);
	}
	return (0);
}
