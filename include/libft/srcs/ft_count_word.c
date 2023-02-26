/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:50:05 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:50:09 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_count_word(char const *src, char sep)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (src[i])
	{
		while (src[i] == sep)
			i++;
		if (src[i] && src[i] != sep)
			words++;
		while (src[i] && src[i] != sep)
			i++;
	}
	return (words);
}
