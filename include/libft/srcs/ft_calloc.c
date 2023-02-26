/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:49:58 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:49:59 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t number_element, size_t size_element)
{
	char	*allocated_area;

	allocated_area = malloc(number_element * size_element);
	if (!allocated_area)
		return (NULL);
	ft_memset(allocated_area, 0, (number_element * size_element));
	return (allocated_area);
}
