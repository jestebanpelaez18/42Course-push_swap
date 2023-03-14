# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 16:53:53 by jpelaez-          #+#    #+#              #
#    Updated: 2023/03/14 16:02:12 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	main.c checker_errors.c utils.c small_sort.c\
swap_moves.c lklst_utils.c rotate_moves.c free_stack.c\
reverse_rotate_moves.c push_moves.c big_sort.c index.c\

OBJECT = $(SRC:.c=.o)

HEADER = push_swap.h

CC = clang
FLAGS = -Wall -Wextra -Werror
IFLAGS = -I $(HEADER)

all: $(NAME)

$(NAME):  $(OBJECT)
		$(CC) $(OBJECT) -o $(NAME) 

%.o: %.c
	$(CC) $(FLAGS) $(IFLAGS) -c -o $@ $< 
	
clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean