# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqribei <jaqribei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 19:15:59 by jaqribei          #+#    #+#              #
#    Updated: 2023/07/19 14:14:30 by jaqribei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

HEADER = ./includes/

SRC = \
	./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c \
	./srcs/main.c

OBJ = ${SRC: .c = .o}

OBJ = \
	./srcs/ft_putchar.o \
	./srcs/ft_putstr.o \
	./srcs/ft_strcmp.o \
	./srcs/ft_strlen.o \
	./srcs/ft_swap.o \
	./srcs/main.o

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${FLAGS} -c ${OBJ} -I ${HEADER}
	ar rc ${NAME} ${OBJ}
	
%.o: %.c
	${CC} -c ${FLAGS} %< -o $@ 

clean:
	rm -f ${OBJ}

fclean:
	rm -f ${NAME}

re:
	fclean all


