# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgonon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/21 20:53:12 by mgonon            #+#    #+#              #
#    Updated: 2016/08/21 23:12:56 by mgonon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = colle_src/*.c print_solution.c main.c string.c

HEADER = header

all: $(NAME)

$(NAME):
		gcc -o $(NAME) -Werror -Wall -Wextra $(SRC) -I $(HEADER)

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)
