# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadesi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/31 12:45:40 by smadesi           #+#    #+#              #
#    Updated: 2019/06/05 10:03:46 by smadesi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
FLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c \ft_bzero.c \ft_isalnum.c \ft_isalpha.c \ft_isascii.c \ft_isdigit.c \ft_isprint.c \
	  ft_tolower.c \ft_toupper.c \ft_memcmp.c \ft_memset.c \ft_memcpy.c \ft_memccpy.c \ft_memchr.c \
	  ft_memmove.c \ft_strlen.c \ft_strlcat.c \ft_strcpy.c \ft_strncpy.c \ft_strcat.c \ft_strncat.c \
	  ft_strchr.c \ft_strrchr.c \ft_strdup.c \ft_strstr.c \ft_strnstr.c \ft_strcmp.c \ft_strncmp.c \

OBJ = ft_atoi.o \ft_bzero.o \ft_isalnum.o \ft_isalpha.o \ft_isascii.o \ft_isdigit.o \ft_isprint.o \
	  ft_tolower.o \ft_toupper.o \ft_memcmp.o \ft_memset.o \ft_memcpy.o \ft_memccpy.o \ft_memchr.o \
	  ft_memmove.o \ft_strlen.o \ft_strlcat.o \ft_strcpy.o \ft_strncpy.o \ft_strcat.o \ft_strncat.o \
	  ft_strchr.o \ft_strrchr.o \ft_strdup.o \ft_strstr.o \ft_strnstr.o \ft_strcmp.o \ft_strncmp.o \


all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADER)
	ar rc $(NAME) *.o

clean:
		rm -f *.o
fclean: clean
		rm -f $(NAME)
re: fclean all
