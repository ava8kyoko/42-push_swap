/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_init_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:04:09 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/26 10:45:02 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_int(char *str)
{
	long long	value;
	int			sign;

	sign = 1;
	value = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		value = value * 10;
		value += *str - '0';
		if ((value * sign) > 2147483647 || (value * sign) < -2147483648)
			return (0);
		str++;
	}
	return (1);
}

// Check if a single element is valid
static int	check_element(char *str)
{
	if (*str == '-')
		str++;
	if (!*str)
		return (-1);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (-1);
		str++;
	}
	if (!is_valid_int(str))
		return (-1);
	return (1);
}

// Count number of elements in array, return -1 for invalid element
static int	check_string(char *str, int count)
{
	while (*str)
	{
		while (*str && *str == ' ')
			str++;
		while (*str && *str != ' ')
		{
			if (*str && *str == '-')
			{
				str++;
				if (!*str || *str == ' ')
					return (-1);
			}
			if (*str && ft_isdigit(*str))
				count++;
			while (*str && *str != ' ')
			{
				if (!ft_isdigit(*str))
					return (-1);
				str++;
			}
		}
	}
	return (count);
}

// Get count of number of elements
int	get_count(int argc, char **argv, int *is_single)
{
	int	i;
	int	ret;
	int	count;

	i = 1;
	ret = 0;
	count = 0;
	if (argc == 2)
	{
		*is_single = 1;
		return (check_string(argv[1], 0));
	}
	while (argv[i])
	{
		ret = check_element(argv[i]);
		if (ret == -1)
			return (-1);
		else
			count += ret;
		i++;
	}
	return (count);
}
