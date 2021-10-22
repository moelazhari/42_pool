# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 09:13:03 by mazhari           #+#    #+#              #
#    Updated: 2021/10/11 10:41:22 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
		 srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDE = -includeincludes/ft.h
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

objs : 
	gcc $(FLAGS) $(INCLUDE) -c $(SRCS)

$(NAME) : objs
	ar rc $(NAME) *.o 
clean :
	rm -f $(NAME)
fclean : clean
	rm -f *.o
re : fclean all
