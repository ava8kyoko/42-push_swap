/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:39:34 by mchampag          #+#    #+#             */
/*   Updated: 2023/02/22 21:00:23 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#ifndef LIBFT_H
# define LIBFT_H

/*
** get_next_line
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif
# define FD_MAX 1024

/*
** LIBRARIES
*/

# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*
** LIBFT FONCTIONS
*/
int		ft_atoi(const char *str);
void	*ft_calloc(size_t number_element, size_t size_element);
int		ft_count_word(char const *src, char sep);

void	*ft_free_array(void *ptr);
void	**ft_free_tab(char **tab);

int		ft_isdigit(int character);
int		ft_isduplicate(int *array, int position);
size_t	ft_isint(char *src);
size_t	ft_isnegative(char *src, char *negative, int len);
size_t	ft_isnumber(char *str);
size_t	ft_isonlyspace(char *str);
size_t	ft_ispositive(char *src, char *positive, int len);
size_t	ft_issigned(char character);
int		ft_issorted_lefttoright(int *numbers, size_t size);
size_t	ft_isspace(char character);

void	*ft_memcpy(void *dest, const void *src, size_t size_tocopy);
void	*ft_memmove(void *dest, const void *src, size_t size_tocopy);
void	*ft_memset(void *str, int character, size_t size_tofill);

size_t	print_number(int *number, int n);
char	**ft_remalloc_it(char **old, int size, char free);
size_t	ft_size_array(char **array);
char	**ft_split(char const *src, char sep);

char	*ft_strchr(const char *str, int character);
void	ft_strdel(char **argv);
char	*ft_strdup(const char *src);
char	*ft_strldup(char *src, char *dest, size_t len);
size_t	ft_strlen(const char *str);

char	*ft_substr(char const *src, unsigned int start, size_t len);

#endif
