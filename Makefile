SRCS = ft_printf.c ft_printf_utils_00.c ft_printf_utils_01.c 

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

RM = rm -f

IDIR = .

CC = cc -I$(IDIR)

CFLAGS = -Wextra -Wall -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar -crs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
