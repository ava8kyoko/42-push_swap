/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:55:12 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 16:59:30 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size_tocopy)
{
	char	*new_dest;
	char	*new_src;

	new_dest = (char *)dest;
	new_src = (char *)src;
	if (!new_dest && !new_src)
		return (0);
	while (size_tocopy--)
	{
		if (new_dest > new_src)
			new_dest[size_tocopy] = new_src[size_tocopy];
		else
			*new_dest++ = *new_src++;
	}
	return (dest);
}
