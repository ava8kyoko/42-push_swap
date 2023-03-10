/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:31:08 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/12 09:26:04 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_isspace(char character)
{
	if (character == ' ' || character == '\t')
		return (1);
	return (0);
}
