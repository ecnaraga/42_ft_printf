# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galambey <galambey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 12:27:36 by galambey          #+#    #+#              #
#    Updated: 2023/05/29 14:32:22 by galambey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog
SRC = main.c
CC = cc
FLAGS = -Wall -Wextra -Werror
INC_LIBFT = -L./../LIBFT -lft
INC_LIBBSD = -LBSD
INC_LIBFT_PRINTF = -L./.. -lftprintf
PATH_LIBFT = ../LIBFT
PATH_LIBFT_PRINTF = ..

all : $(NAME)

$(NAME) : clean
	make -C $(PATH_LIBFT_PRINTF)
	$(CC) $(FLAGS) $(SRC) $(INC_LIBBSD) $(INC_LIBFT) $(INC_LIBFT_PRINTF) -I $(PATH_LIBFT) -I $(PATH_LIBFT_PRINTF) -o $@
	./prog

valgrind : clean
	make -C $(PATH_LIBFT_PRINTF)
	$(CC) $(FLAGS) $(SRC) $(INC_LIBBSD) $(INC_LIBFT) $(INC_LIBFT_PRINTF) -I $(PATH_LIBFT) -I $(PATH_LIBFT_PRINTF) -o $@
	valgrind ./prog

time : clean
	make -C $(PATH_LIBFT_PRINTF)
	$(CC) $(FLAGS) $(SRC) $(INC_LIBBSD) $(INC_LIBFT) $(INC_LIBFT_PRINTF) -I $(PATH_LIBFT) -I $(PATH_LIBFT_PRINTF) -o $@
	time ./prog

clean :
	make -C $(PATH_LIBFT_PRINTF) fclean
	rm -f prog

.PHONY : all valgrind time clean