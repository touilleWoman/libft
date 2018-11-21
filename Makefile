.PHONY: all clean fclean re

SOURCE = ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_strlen.c \
ft_strdup.c \
ft_strcpy.c \
ft_strncpy.c \
ft_strcmp.c \

OFILE = $(SOURCE:c=o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILE)
	ar rcs $(NAME) $(OFILE)

$(OFILE):
	gcc -Wall -Werror -Wextra -c $(SOURCE) -I.

clean:
	rm -f $(OFILE)

fclean: clean
	rm -f $(NAME)

re:fclean all
