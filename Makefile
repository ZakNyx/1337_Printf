NAME = libftprintf.a

AR = ar -rc

GCC = gcc -c

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -I $(LIBFT_DIR) 

LIBFT_DIR = libft

LIBFT_PATH = ${LIBFT_DIR}/libft.a/

LIBFT_MAKE = Makefile

FILES = ft_parse.c \
	ft_printf.c \
	ft_printf_address.c \
	ft_printf_chars.c \
	ft_printf_numbers.c \
	ft_printf_tools 

OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(FILES)
	$(AR) $(NAME) $(OBJS)

git:
	git add .
	git commit -m "$m"
	git push
