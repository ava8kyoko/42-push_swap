/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:42:22 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/16 16:42:23 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t			i;
	size_t			slen;
	char			*tmp;

	if (!src)
		return (NULL);
	slen = ft_strlen((char *)src);
	if (start > slen)
		return (ft_strdup(""));
	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = -1;
	while (++i < len)
		tmp[i] = src[start + i];
	tmp[i] = '\0';
	return (tmp);
}
