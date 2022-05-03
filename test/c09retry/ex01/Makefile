SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADER	= includes

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc  

CFLAGS	= -Wall -Wextra -Werror

LIBA	= ar rc

LIBS	= ranlib

RM	= rm -f

.c.o: 
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}:	${OBJS}
		${LIBA} ${NAME} ${OBS}
		${LIBS} ${NAME}

all:		${NAME}

clean:		
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all
