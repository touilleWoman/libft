.PHONY: all clean fclean re

SOURCE = ft_memset.c \
main.c\

NAME = ft_memset

all: $(SOURCE)
	gcc -Wall -Werror -Wextra $(SOURCE) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re:
	fclean all
