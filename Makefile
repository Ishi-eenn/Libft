SRCS = ft_atoi.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
INCS = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -I ${INCS} ${SRCS} -o ${NAME}

.c.o:
	${CC} ${CFLAGS} -I ${INCS} -c $< -o $@

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all