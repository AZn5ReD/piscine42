# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchirk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 12:46:25 by jchirk            #+#    #+#              #
#    Updated: 2018/08/15 13:25:27 by jchirk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
SRC_DIR = ./srcs
INC_DIR = ./includes
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_swap.c
SRC.O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS= -c -I$(INC_DIR)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC)
	ar rc $(NAME) $(SRC.O)
	ranlib $(NAME)

clean:
	rm -f $(SRC.O)

fclean: clean
	rm -f $(NAME)

re: fclean all
