/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_onlyspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:31:00 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/12 09:26:38 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_isonlyspace(char *str)
{
	while (ft_isspace(*str))
	{
		str++;
		if (!*str)
			return (1);
	}
	return (0);
}
