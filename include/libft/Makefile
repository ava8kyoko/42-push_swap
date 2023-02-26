# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 15:12:26 by mchampag          #+#    #+#              #
#    Updated: 2023/02/23 09:23:08 by mchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME = libft.a

# Flags
AR = ar
CC = gcc
ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror -g

# Sources files
S			=	srcs/
SRCS_FILES 	=	ft_atoi.c ft_calloc.c ft_count_word.c ft_free_array.c \
				ft_free_tab.c ft_isdigit.c ft_isduplicate.c ft_isint.c \
				ft_isnegative.c ft_isnumber.c ft_isonlyspace.c ft_ispositive.c ft_issigned.c ft_issorted.c \
				ft_isspace.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_print_number.c ft_remalloc_it.c ft_size_array.c \
				ft_size_array.c ft_split.c ft_strchr.c ft_strdel.c \
				ft_strdup.c ft_strldup.c ft_strlen.c ft_substr.c
SRCS		=	$(addprefix $S, $(SRCS_FILES))

SRCS = $(addprefix $S, $(SRCS_FILES))

# Objects conversion
O = objs/
OBJS= $(SRCS:$S%=$O%.o)
$O%.o: $S%
	@printf "$R■$W"
	@$(CC) $(CFLAGS) -c $< -o $@
	
# Main rule
all: init $(NAME)
	@echo "$G\n$(NAME) compiled$W"

# Making objs folder
init:
	@mkdir -p $O
	@printf "$CCreating $(NAME)\n$W"

# Creating libft library
$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^

# Cleaning
REMOVE = rm -rf

clean:
	@$(REMOVE) $O

fclean: clean
	@$(REMOVE) $(NAME)

re:	fclean all
