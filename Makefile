# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleblond <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/21 20:32:08 by jleblond          #+#    #+#              #
#    Updated: 2018/12/21 20:32:10 by jleblond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC ?= gcc

CFLAGS ?= -Wall -Werror -Wextra

NAME = libft.a

SRCS_NAME = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c\
ft_lstdel.c ft_lstadd_bot.c ft_lstadd_top.c ft_lstiter.c  ft_lstcpy.c\
ft_word_nbr_counter.c ft_lstlen.c ft_islower.c ft_isupper.c \
get_next_line.c ft_aatoii.c ft_color_val_calculate.c ft_lstmap.c\

#functions of ft_printf
SRCS_NAME += ft_printf.c
SRCS_NAME += pf_parse.c
SRCS_NAME += pf_parse_type_c.c
SRCS_NAME += pf_parse_type_s.c
SRCS_NAME += pf_parse_type_f.c
SRCS_NAME += pf_parse_type_oxx.c
SRCS_NAME += pf_parse_type_u.c
SRCS_NAME += pf_parse_type_b.c
SRCS_NAME += pf_unit_list.c
SRCS_NAME += pf_print_c_s_ltr.c
SRCS_NAME += pf_print_d.c
SRCS_NAME += pf_print_p.c
SRCS_NAME += pf_print_oxx.c
SRCS_NAME += pf_print_u.c
SRCS_NAME += pf_print_f.c
SRCS_NAME += pf_print_b.c
SRCS_NAME += pf_dtoa.c
SRCS_NAME += pf_itoa.c
SRCS_NAME += pf_type_f_tool.c

SRCS_PATH = ./srcs

HEAD_PATH = ./includes

HEADER = $(HEAD_PATH)/ft_printf.h $(HEAD_PATH)/pf_unit.h $(HEAD_PATH)/libft.h

SRCS = $(addprefix $(SRCS_PATH)/, $(SRCS_NAME))

OBJ = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $< -I includes

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
