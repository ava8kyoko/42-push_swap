/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:30:36 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:47:08 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_issorted(int *numbers, size_t size, size_t x)
{
	while (size + 1 != 1 && ++x <= size - 1)
	{
		if (numbers[x] > numbers[x + 1])
			return (0);
	}
	return (1);
}

int	ft_issorted_lefttoright(int *numbers, size_t size)
{
	return (ft_issorted(numbers, size - 1, -1));
}
