/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:30:57 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:59:50 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_isnumber(char *str)
{
	int	i;

	if (!str || ft_isonlyspace(str))
		return (0);
	i = 0;
	while (ft_issigned(str[i]) || ft_isdigit(str[i])
		|| ft_isspace(str[i]))
	{
		if (ft_issigned(str[i + 1]) && ft_isdigit(str[i]))
			return (0);
		i++;
		if (!str[i])
			return (i);
	}
	return (0);
}
