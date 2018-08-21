# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchirk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 18:35:47 by jchirk            #+#    #+#              #
#    Updated: 2018/08/15 19:12:17 by jchirk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = gcc
SRC_DIR = ./srcs
INC_DIR = ./includes
SRC = $(SRC_DIR)/do_op.c $(SRC_DIR)/main.c $(SRC_DIR)/op.c $(SRC_DIR)/util.c
SRC.O = do_op.o main.o op.o util.o
FLAGS = -Wall -Werror -Wextra -c -I$(INC_DIR)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC)
	$(CC) -o $(NAME) $(SRC.O)

clean:
	rm -f $(SRC.O)
