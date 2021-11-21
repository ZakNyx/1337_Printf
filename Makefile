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

AR = @ar -rc

CC = @gcc -c

RM = @rm -rf

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

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(FILES)
	$(AR) $(NAME) $(OBJS)
	@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"

clean:
	${RM} ${OBJS}
	@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"

fclean: clean
	${RM} ${NAME}
	@echo "$(C_RED)[PROJECT.A REMOVED!]$(C_RES)"

re: fclean all
