/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:17:26 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/12 14:52:14 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	**free_tab(char **tab)
{
	size_t	i;

	if (tab)
	{
		i = -1;
		while (tab[++i])
			tab[i] = ft_free_array(tab[i]);
		free(tab);
	}
	return (0);
}
