/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnegative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:49:46 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/22 16:50:26 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// char	negative[11] = "-2147483648";

size_t	ft_isnegative(char *src, char *negative, int len)
{
	if (src[0] == '-')
	{
		while (len >= 0 && src[len] != '-')
		{
			if (src[len] > negative[len])
				return (0);
			len--;
		}
		return (1);
	}
	return (0);
}
