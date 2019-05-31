# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadesi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/31 12:45:40 by smadesi           #+#    #+#              #
#    Updated: 2019/05/31 12:57:56 by smadesi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME : libft.h

FLAGS : -Wall -Werror -Wextra

SRC : ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \

OBJ : ft_atoi.o \

ALL: $(NAME)
$ (NAME):
	gcc -c $(SRC) -I $(HEADER)
	ar rc $(NAME) *.o
clean:
		rm -f *.o
fclean: clean
		rm -f $(NAME)
re: fclean all
