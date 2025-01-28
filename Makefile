SRCS	= assign_index.c chunk_algo.c ft_utils.c lst_utils.c ft_split.c parsing.c parsing2.c push_swap_cmd_s.c push_swap_cmd_p.c push_swap_cmd_r.c push_swap_cmd_rr.c push_swap.c sort_five.c sort_three.c

OBJS	= ${SRCS:.c=.o}

CC	= cc

RM	= rm -f

CFLAGS    = -Wall -Wextra -Werror

NAME    = push_swap

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}:    ${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}
clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: clean fclean all re