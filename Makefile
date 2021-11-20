# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 19:47:29 by zihirri           #+#    #+#              #
#    Updated: 2021/11/20 19:47:30 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR = ar -rc

CC = gcc -c

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra 

FILES = ft_parse.c \
	ft_printf.c \
	ft_printf_address.c \
	ft_printf_chars.c \
	ft_printf_numbers.c \
	ft_printf_tools.c \
	ft_strlen.c \
	ft_putnbr_fd.c \
	ft_putchar_fd.c

OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(FILES)
	$(AR) $(NAME) $(OBJS)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

git:
	git add .
	git commit -m "$m"
	git push
