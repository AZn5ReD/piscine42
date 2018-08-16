# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchirk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 18:35:47 by jchirk            #+#    #+#              #
#    Updated: 2018/08/16 15:43:25 by jchirk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op
CC = gcc
SRC_DIR = ./srcs
INC_DIR = ./includes
SRC = $(SRC_DIR)/do_op.c $(SRC_DIR)/main.c $(SRC_DIR)/op_1.c $(SRC_DIR)/util.c \
	$(SRC_DIR)/op_2.c
SRC.O = do_op.o main.o op_1.o op_2.o util.o
FLAGS = -Wall -Werror -Wextra -c -I$(INC_DIR)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC)
	$(CC) -o $(NAME) $(SRC.O)

clean:
	rm -f $(SRC.O)
