/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:54:32 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/12 09:27:13 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Check if a character is duplicated inside its array.
*/

#include "../libft.h"

int	ft_isduplicate(int *array, int position)
{
	int		i;

	if (!position)
		return (0);
	i = 0;
	while (i < position)
		if (array[i++] == array[position])
			return (1);
	return (0);
}
