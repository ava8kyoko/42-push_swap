/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:00 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:41:21 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	write_push(char stack_flag)
{
	if (stack_flag == 'a')
		write(1, "pa\n", 3);
	else if (stack_flag == 'b')
		write(1, "pb\n", 3);
}

void	write_rotate(char stack_flag)
{
	if (stack_flag == 'a')
		write(1, "ra\n", 3);
	else if (stack_flag == 'b')
		write(1, "rb\n", 3);
	else if (stack_flag == 'c')
		write(1, "rr\n", 3);
}

void	write_rrotate(char stack_flag)
{
	if (stack_flag == 'a')
		write(1, "rra\n", 4);
	else if (stack_flag == 'b')
		write(1, "rrb\n", 4);
	else if (stack_flag == 'c')
		write(1, "rrr\n", 4);
}

void	write_swap(char stack_flag)
{
	if (stack_flag == 'a')
		write(1, "sa\n", 3);
	else if (stack_flag == 'b')
		write(1, "sb\n", 3);
}
