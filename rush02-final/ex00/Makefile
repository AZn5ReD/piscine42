# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amelman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 18:20:43 by amelman           #+#    #+#              #
#    Updated: 2018/08/21 10:30:54 by jchirk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC = gcc
SRC_DIR = ./srcs
INC_DIR = ./includes
SRC= $(SRC_DIR)/affichage.c $(SRC_DIR)/fonctions.c $(SRC_DIR)/main.c  $(SRC_DIR)/colle00_1.c  $(SRC_DIR)/colle00_2.c $(SRC_DIR)/colle00_3.c $(SRC_DIR)/colle00_0.c  $(SRC_DIR)/colle00_4.c $(SRC_DIR)/read.c $(SRC_DIR)/compare.c
SRC.O= affichage.o fonctions.o main.o colle00_1.o colle00_2.o colle00_3.o colle00_0.o colle00_4.o read.o compare.o

FLAGS= -Wall -Werror -Wextra -c -I$(INC_DIR)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRC) 
	$(CC) -o $(NAME) -fsanitize=address $(SRC.O)

clean:
	rm $(SRC.O)

fclean:
	rm -f $(NAME) 

re: clean all
