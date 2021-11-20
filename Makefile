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

${LIBFT_DIR}: 
	@make -s -C ${LIBFT_DIR} -f ${LIBFT_MAKE} all
	@cp ${LIBFT_PATH} ${NAME}

clean:
	${RM} ${OBJS} ${NAME}
	make -C ${LIBFT_DIR} -f ${LIBFT_MAKE} clean

fclean: clean
	${RM} ${OBJS} ${NAME} a.out
	make -C ${LIBFT_DIR} -f ${LIBFT_MAKE} clean

re: 	fclean all

git:
	git add .
	git commit -m "$m"
	git push
