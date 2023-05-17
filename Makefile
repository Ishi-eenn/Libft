NAME		= libft.a
AR			= ar rc
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_atoi.c ft_strdup.c
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

