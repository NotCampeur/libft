# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: notcampeur <notcampeur@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 17:28:34 by ldutriez          #+#    #+#              #
#    Updated: 2021/10/01 12:26:30 by notcampeur       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

IFLAGS=-Iincludes

RM=rm -rf

vpath %.c srcs

SRC=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCBONUS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_DIR = objs

OBJ=$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
OBJBONUS=$(OBJ)
OBJBONUS+=$(addprefix $(OBJ_DIR)/, $(SRCBONUS:.c=.o))

$(OBJ_DIR)/%.o : %.c
			@mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

$(NAME):		$(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

all: $(NAME)

.libft_bonus: 		$(OBJBONUS)
				ar rc $(NAME) $^
				ranlib $(NAME)
				touch .libft_bonus

bonus: .libft_bonus

debug: $(NAME) debug.c
	$(CC) $(CFLAGS) $(IFLAGS) -o debug debug.c libft.a

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) .libft_bonus debug

re: clean fclean all bonus

.PHONY: all bonus clean fclean re
