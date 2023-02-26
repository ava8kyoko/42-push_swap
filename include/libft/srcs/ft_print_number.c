/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:55:30 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:45:07 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	print_number(int *number, int n)
{
	size_t	i;
	size_t	nbr;

	i = 0;
	nbr = 0;
	while (n--)
		nbr += printf("%d ", number[i++]);
	printf("\n");
	return (nbr);
}
