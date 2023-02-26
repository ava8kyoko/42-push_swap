/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:51:47 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/23 09:42:11 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	size_t		size_a;
	int			*a;
	size_t		size_b;
	int			*b;
	int			next;
	int			median;
	size_t		block;
	size_t		upgrade;
	int			min;
	int			max;
	int			regular_sort;
	int			remaining_low;
	int			remaining_high;
}				t_stack;

void	push(t_stack *stack, int *a, int *b, char stack_flag);
void	rotate(int *stack, int size, char stack_flag);
void	rotate_ab(t_stack *stack);
void	rrotate(int *stack, int size, char stack_flag);
void	rrotate_ab(t_stack *stack);
void	swap(int *left, int *right, char stack_flag);

void	write_push(char stack_flag);
void	write_rotate(char stack_flag);
void	write_rrotate(char stack_flag);
void	write_swap(char stack_flag);

int		main(int argc, char **argv);

int		get_count(int argc, char **argv, int *is_single);
int		is_valid_int(char *str);

int		init_stack(t_stack *stack, char **argv, int is_single);

int		sub_number(t_stack *stack, size_t size);

void	sort_three(int *stack, size_t size, char stack_flag);
void	sort_five(t_stack *stack);
void	quicksort_a_to_b(t_stack *stack, int times);
void	quicksort_b_to_a(t_stack *stack);

#endif
