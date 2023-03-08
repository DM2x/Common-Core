# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dm2x <dm2x@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 02:00:38 by dm2x              #+#    #+#              #
#    Updated: 2023/03/08 02:00:38 by dm2x             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC    = ft_*.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):    $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:    clean
		$(RM) $(NAME)

re:	fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)