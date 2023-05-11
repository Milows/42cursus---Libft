NAME = libft.a

SRCS = ft_isdigit.c ft_isascii.c ft_isprint.c\
	ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c\
	ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_atoi.c\
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c\
	ft_putendl_fd.c ft_pntnbr_fd.c ft_strmapi.c\

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
