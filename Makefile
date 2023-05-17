NAME		= libft.a
AR			= ar r
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
SRCS		= ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
OBJS		= $(SRCS:%.c=%.o)
B_SRCS		= $(SRCS)
B_OBJS		= $(B_SRCS:%.c=%.o)

all:	$(NAME)

$(NAME):
			$(CC) $(CFLAGS) -c $(SRCS)
			$(AR) $(NAME) $(OBJS)

bonus:
			$(CC) $(CFLAGS) -c $(B_SRCS)
			$(AR) $(NAME) $(B_OBJS)

clean:
			$(RM) *.o

fclean:	clean
			$(RM) $(NAME)

re:	fclean all

