# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchirk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 15:07:16 by jchirk            #+#    #+#              #
#    Updated: 2018/08/18 15:37:50 by jchirk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC_DIR = ./srcs
SRC= $(SRC_DIR)/colle.h $(SRC_DIR)/util.c
FLAGS= -Wall -Werror -Wextra -c

all: 00 01 02 03 04

00:
	$(CC) $(FLAGS) $(SRC) $(SRC_DIR)/main00.c
	$(CC) -o colle-00 *.o
	rm *.o
01:
	$(CC) $(FLAGS) $(SRC) $(SRC_DIR)/main01.c
	$(CC) -o colle-01 *.o
	rm *.o
02:
	$(CC) $(FLAGS) $(SRC) $(SRC_DIR)/main02.c
	$(CC) -o colle-02 *.o
	rm *.o
03:
	$(CC) $(FLAGS) $(SRC) $(SRC_DIR)/main03.c
	$(CC) -o colle-03 *.o
	rm *.o
04:
	$(CC) $(FLAGS) $(SRC) $(SRC_DIR)/main04.c
	$(CC) -o colle-04 *.o
	rm *.o

clean:
	rm *.o

fclean:
	rm -f colle-00 colle-01 colle-02 colle-03 colle-04

re: clean all
