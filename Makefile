# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galambey <galambey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 13:55:00 by galambey          #+#    #+#              #
#    Updated: 2023/06/23 16:03:08 by galambey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c \
	printf_utils.c \
	do_print.c \
	manage_arg.c \
	ft_atoi_mode.c \
	ft_print_char.c \
	ft_print_int.c \
	check_flag.c \
	ft_print_unsignedint.c \
	ft_print_lowhexa.c \
	ft_print_upphexa.c \
	ft_print_str.c \
	ft_print_ptr.c
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror -g
PATH_LIBFT = ./LIBFT

all : bonus

$(NAME) : $(OBJ)
	make -C $(PATH_LIBFT)
	cp ./LIBFT/libft.a ./libftprintf.a
	ar -rcs $@ $(OBJ)

bonus : $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -I $(PATH_LIBFT) -o $@

clean :
	make -sC $(PATH_LIBFT) clean
	rm -f *o

fclean : clean
	make -sC $(PATH_LIBFT) fclean
	rm -f $(NAME)

re : fclean
	make all

.PHONY : all bonus clean fclean re