# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 15:40:05 by iqattami          #+#    #+#              #
#    Updated: 2024/02/29 15:43:30 by iqattami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c instructions.c sort.c

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all
