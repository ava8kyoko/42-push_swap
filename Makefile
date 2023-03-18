# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 09:25:26 by mchampag          #+#    #+#              #
#    Updated: 2023/02/23 09:56:27 by mchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME = push_swap

# Flags
AR = ar
CC = gcc
ARFLAG = rcs
CFLAG = -Wall -Wextra -Werror -g

# Includes
LIBFT = include/libft/libft.a
LIBFT_PATH = include/libft/

# Files sources
S = src/
SRC_FILE =	algo_push.c algo_rotate.c algo_swap.c algo_write.c \
				main.c pars_init_stack.c pars_init_utils.c \
				pars_sub_number.c sort_big_a_to_b.c sort_big_b_to_a.c \
				sort_small.c
SRC = $(addprefix $S, $(SRC_FILE))

# Object conversion
O = obj/
OBJ= $(SRC:$S%=$O%.o)
$O%.o: $S%
	@printf "$R■$W"
	@$(CC) $(CFLAG) -c $< -o $@

# Main rule
all: init $(NAME)
	@echo "$G\n$(NAME) compiled$W"
	
# Initialise librairies and making objs folder
init:
	@mkdir -p $O
	@echo "$GLibrary's initialisation$W"
	@$(MAKE) -s -C $(LIBFT_PATH)
	@printf "$CCreating $(NAME)\n$W"

# Creating  executable
$(NAME): $(OBJ)
	@$(CC) $(CFLAG) -o $@ $^ $(LIBFT)

# Cleaning
REMOVE = rm -rf

clean:
	@$(REMOVE) $O
	@$(MAKE) -s clean -C $(LIBFT_PATH)

fclean: clean
	@$(REMOVE) $(NAME)
	@$(MAKE) -s fclean -C $(LIBFT_PATH)

re:	fclean all
