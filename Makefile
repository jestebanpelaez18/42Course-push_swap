# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 16:53:53 by jpelaez-          #+#    #+#              #
#    Updated: 2023/03/23 15:44:17 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	main.c checker_errors.c utils.c small_sort.c\
swap_moves.c lklst_utils.c rotate_moves.c free_stack.c\
reverse_rotate_moves.c push_moves.c big_sort.c index.c \

OBJECT = $(SRC:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

HEADER = push_swap.h
LIBFT_HEADER = ./libft/libft.h

FLAGS = -Wall -Wextra -Werror
IFLAGS = -I $(HEADER) 
LFLAGS = -L $(LIBFT) -l ft 

CC = clang

all: $(NAME) 

$(NAME):  $(OBJECT) 
		make -C $(LIBFT_DIR)
		$(CC) $(FLAGS) $(IFLAGS) $(OBJECT) $(LIBFT) -o $(NAME) 
	
clean:
	make -C $(LIBFT_DIR) fclean
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean