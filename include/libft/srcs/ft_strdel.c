/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:53:12 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/21 20:49:12 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// void	ft_strddel(char ***ap)
// {
// 	int		i;
// 	if (!ap)
// 		return ;
// 	i = 0;{}
// 	while ((*ap)[i])
// 	{
// 		if ((*ap) + i)
// 			ft_strdel((*ap) + i);
// 		i++;
// 	}
// 	free(*ap);
// 	*ap = NULL;
// }

void	ft_strdel(char **argv)
{
	int	i;

	if (!argv)
		return ;
	i = 0;
	while (argv[i])
		free(argv[i++]);
	free(argv);
}
