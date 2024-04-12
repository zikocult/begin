CC	= cc
CFLAGS	= -Wall -Wextra -Werror -c

NAME	= libft.a

SRCDIR	= srcs
INCDIR	= includes

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}

RM	= rm -f

all:		${NAME}

%.o: %.c	
		${CC} ${CFLAGS} $< -o $@ -I ${INCDIR}

${NAME}:	${OBJS}
		ar -rc $@ ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
