/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:03:49 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:42:00 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push_moves(int *src, int *dest, int size_src, int size_dest)
{
	int	i;

	if (!size_src)
		return ;
	if (size_dest)
	{
		i = -1;
		while (++i != size_dest)
			ft_memmove(dest + (size_dest - i), dest + (size_dest - i - 1),
				sizeof(int));
	}
	ft_memmove(dest, src, sizeof(int));
	i = -1;
	while (++i < size_src)
		ft_memmove(src + i, src + (i + 1), sizeof(int));
}

/*
** pa (push a): Take the first element at the top of b and put it
** 				at the top of a.
** 		Do nothing if b is empty.
** pb (push b): Take the first element at the top of a and put it
** 				at the top of b.
** 		Do nothing if a is empty
*/
void	push(t_stack *stack, int *a, int *b, char stack_flag)
{
	if (stack_flag == 'a')
		push_moves(b, a, stack->size_b--, stack->size_a++);
	else if (stack_flag == 'b')
		push_moves(a, b, stack->size_a--, stack->size_b++);
	write_push(stack_flag);
}
