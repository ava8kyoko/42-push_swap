/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:55:15 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 16:59:33 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *str, int character, size_t size_tofill)
{
	char	*new_str;

	new_str = str;
	while (size_tofill--)
		*new_str++ = (unsigned char) character;
	return (str);
}
