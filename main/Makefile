# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galambey <galambey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 12:27:36 by galambey          #+#    #+#              #
#    Updated: 2023/06/19 14:54:38 by galambey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog
SRC = main_mandatory.c
CC = cc
FLAGS = -Wall -Wextra -Werror
INC_LIBBSD = -LBSD
INC_LIBFT_PRINTF = -L./.. -lftprintf
PATH_LIBFT = ../LIBFT
PATH_LIBFT_PRINTF = ..

all : $(NAME)

$(NAME) : clean
	make -sC $(PATH_LIBFT_PRINTF)
	$(CC) $(FLAGS) $(SRC) $(INC_LIBBSD) $(INC_LIBFT_PRINTF) -I $(PATH_LIBFT) -I $(PATH_LIBFT_PRINTF) -o $@

noflag : clean
	make -C $(PATH_LIBFT_PRINTF)
	$(CC) -g3 $(SRC) $(INC_LIBBSD) $(INC_LIBFT_PRINTF) -I $(PATH_LIBFT) -I $(PATH_LIBFT_PRINTF) -o $(NAME)

valgrind : clean
	make -sC $(PATH_LIBFT_PRINTF)
	$(CC) $(FLAGS) $(SRC) $(INC_LIBBSD) $(INC_LIBFT_PRINTF) -I $(PATH_LIBFT) -I $(PATH_LIBFT_PRINTF) -o $(NAME)
	valgrind ./prog

time : clean
	make -C $(PATH_LIBFT_PRINTF)
	$(CC) $(FLAGS) $(SRC) $(INC_LIBBSD) $(INC_LIBFT_PRINTF) -I $(PATH_LIBFT) -I $(PATH_LIBFT_PRINTF) -o $(NAME)
	time ./prog

clean :
	make -C $(PATH_LIBFT_PRINTF) fclean
	rm -f prog
	rm -f a.out

.PHONY : all valgrind time clean