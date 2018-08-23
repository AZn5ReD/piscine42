# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchirk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 18:10:42 by jchirk            #+#    #+#              #
#    Updated: 2018/08/21 19:54:35 by jchirk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat 
CC = gcc
SRC_DIR = ./srcs
INC_DIR = ./includes
SRC = $(SRC_DIR)/*.c
OBJ = *.o
FLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)
