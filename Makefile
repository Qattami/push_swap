# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 16:18:52 by iqattami          #+#    #+#              #
#    Updated: 2024/02/04 16:19:26 by iqattami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 

BONUS = 

OBJ = $(SRCS:.c=.o)
OBONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBONUS): $(BONUS)
	${CC} ${CFLAGS} -c ${BONUS}
		ar rc $(NAME) $(OBONUS)

bonus: $(OBONUS)
	

clean:
	rm -f $(OBJ) $(OBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
