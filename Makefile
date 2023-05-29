# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galambey <galambey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 13:55:00 by galambey          #+#    #+#              #
#    Updated: 2023/05/29 17:03:20 by galambey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_split_mode.c#ft_printf.c \
	ft_split_mode.c
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror -g
PATH_LIBFT = ./LIBFT

all : $(NAME)

$(NAME) : lib $(OBJ)
	ar -rcs $@ $(OBJ)

lib :
	make -C $(PATH_LIBFT)

%.o:%.c
	$(CC) $(FLAGS) -c $< -I $(PATH_LIBFT) -o $@

clean :
	make -C $(PATH_LIBFT) clean
	rm -f *o

fclean : clean
	make -C $(PATH_LIBFT) fclean
	rm -f $(NAME)

re : fclean all

.PHONY : all lib clean fclean re