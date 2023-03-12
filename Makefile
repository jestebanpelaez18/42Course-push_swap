# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 16:53:53 by jpelaez-          #+#    #+#              #
#    Updated: 2023/03/12 17:01:15 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	main.c checker_errors.c utils.c small_sort.c\
		swap_moves.c lklst_utils.c rotate_moves.c\
		reverse_rotate_moves.c push_moves.c big_sort.c index.c\

HEADER = -c -I push_swap.h

FLAGS = -Wall -Wextra -Werror

OBJECT = 	main.o checker_errors.o utils.o small_sort.o\
			swap_moves.o lklst_utils.o rotate_moves.o\ 
			reverse_rotate_moves.o push_moves.o big_sort.o index.o\

all: $(NAME)

$(NAME):
	clang -c $(FLAGS) $(SRC) $(HEADER) 
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME) 
	
clean:
	rm -f $(OBJECT) $(OBJECTB)

fclean: clean
	   rm -f $(NAME)

re: fclean all