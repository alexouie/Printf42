NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I .

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbruns.c \
       ft_puthex.c ft_putheX.c ft_putp.c

OBJS = ${SRCS:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
