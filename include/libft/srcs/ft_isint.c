/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:30:54 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/22 16:53:39 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_isint(char *src)
{
	int		len;

	len = ft_strlen(src);
	if (len < 10 || ((src[0] == '-' || src[0] == '+') && len == 10))
		return (1);
	else if (len == 10 || ((src[0] == '-' || src[0] == '+') && len == 11))
	{
		len--;
		return (ft_isnegative(src, "-2147483648", len)
			|| ft_ispositive(src, "2147483647", len));
	}
	return (0);
}
