/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispositive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:47:42 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/22 16:56:03 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// char	positive[10] = "2147483647";

size_t	ft_ispositive(char *src, char *positive, int len)
{
	if (src[0] != '-')
	{
		while (len >= 0 && src[len] != '+')
		{
			if (src[len] > positive[len])
				return (0);
			len--;
		}
		return (1);
	}
	return (0);
}
