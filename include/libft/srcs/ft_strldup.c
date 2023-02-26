/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strldup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:55:34 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/12 09:30:37 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strldup(char *src, char *dest, size_t len)
{
	size_t		i;

	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	i = 0;
	while (*src && i < len)
	{
		dest[i++] = *src;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
