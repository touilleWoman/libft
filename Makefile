
SOURCE = ft_memset.c \
main.c\
libft.h \

all:
	gcc -Wall -Werror -Wextra $(SOURCE)

clean:

fclean:
	rm -f a.out

re:
	fclean all

.PHONY: all clean fclean re
