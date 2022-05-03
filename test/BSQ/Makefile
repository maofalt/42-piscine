NAME = bsq

INCLUDES_DIR = includes
 
SRCS = srcs/main.c srcs/check_board.c srcs/get_board.c srcs/print_board.c srcs/usefull.c srcs/ft_split.c srcs/find_bsq.c srcs/partial_sums.c srcs/feel_free.c srcs/new_coord.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -I ${INCLUDES_DIR} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

