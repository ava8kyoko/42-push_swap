/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:03:55 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/11 12:03:56 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(int *left, int *right, char stack_flag)
{
	if (left == right)
		return ;
	write_swap(stack_flag);
	*left = *left ^ *right;
	*right = *left ^ *right;
	*left = *left ^ *right;
}

/*
void	swap(int left, int *right, char stack)
{
	if (*left == *right)
		return ;
	write_swap(stack);
	*left ^= *right;
	*right ^= *left;
	*left ^= *right;
}
*/
