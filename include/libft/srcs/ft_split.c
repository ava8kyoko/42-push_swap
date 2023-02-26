/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:55:18 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 16:59:39 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_split(char const *src, char sep)
{
	char	**tab;
	int		words;
	int		i;
	int		len;

	words = ft_count_word(src, sep);
	tab = ft_calloc(sizeof(char *), (words + 1));
	i = -1;
	if (!tab)
		return (0);
	while (++i < words)
	{
		while (*src && *src == sep)
			src++;
		if (ft_strchr(src, sep))
			len = ft_strchr(src, sep) - src;
		else
			len = ft_strlen(src);
		tab[i] = ft_substr(src, 0, len);
		if (!tab[i])
			return (0);
		src += len;
	}
	return (tab);
}
