.PHONY: all clean fclean re

SOURCE = ft_memset.c \
ft_bzero.c\
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_strlen.c \
ft_strdup.c \
ft_strcpy.c \
ft_strncpy.c \
ft_strcat.c \
ft_strncat.c \
ft_strlcat.c \
ft_strchr.c \
ft_strrchr.c \
ft_strstr.c \
ft_strcmp.c \
ft_strncmp.c \
ft_putchar.c \
ft_putstr.c \
ft_putnbr.c \

HEADER = libft.h

OFILE = $(SOURCE:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILE)
	ar rcs $(NAME) $(OFILE)

$(OFILE): $(SOURCE) $(HEADER)
	gcc -Wall -Werror -Wextra -c $(SOURCE) -I.

clean:
	rm -f $(OFILE)

fclean: clean
	rm -f $(NAME)

re:fclean all
