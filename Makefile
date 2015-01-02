# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/10 11:30:22 by aalliot           #+#    #+#              #
#    Updated: 2014/11/29 14:45:59 by aalliot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

STATIC_LIB	= libft.a
DEBUG_LIB	= libft_debug.a
DYNAMIC_LIB	= libft.so

SRC		= ft_toupper.c ft_tolower.c ft_strtrim.c ft_strsub.c ft_strstr.c \
		  ft_strrchr.c ft_strnstr.c ft_strnew.c ft_strnequ.c ft_strncpy.c \
		  ft_strncmp.c ft_strncat.c ft_strmapi.c ft_strmap.c ft_strlen.c \
		  ft_strlcat.c ft_strjoin.c ft_striteri.c ft_striter.c ft_strequ.c \
		  ft_strdup.c ft_strdel.c ft_strcpy.c ft_strcmp.c ft_strclr.c \
		  ft_strchr.c ft_strcat.c ft_putstr_fd.c ft_putstr.c ft_putnbr_fd.c \
		  ft_putnbr.c ft_putendl_fd.c ft_putendl.c ft_putchar_fd.c \
		  ft_putchar.c ft_memset.c ft_memmove.c ft_memdel.c ft_memcpy.c \
		  ft_memcmp.c ft_memchr.c ft_memccpy.c ft_memalloc.c ft_isprint.c \
		  ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_bzero.c \
		  ft_atoi.c ft_strsplit.c ft_itoa.c \
		  ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
		  get_next_line.c ft_q_sort.c ft_bbl_sort.c ft_merge_sort.c

DYNAMIC_OBJ	= $(patsubst %.c,$(DYNAMIC_DIR)/%.o,$(SRC))
STATIC_OBJ	= $(patsubst %.c,$(STATIC_DIR)/%.o,$(SRC))
DEBUG_OBJ	= $(patsubst %.c,$(DEBUG_DIR)/%.o,$(SRC))

HEAD_DIR	= includes
SRC_DIR		= src
DEBUG_DIR	= debug
STATIC_DIR	= static
DYNAMIC_DIR	= dynamic

CC			= gcc
FLAGS		= -Wall -Wextra -Werror

all: $(NAME)

	$(shell mkdir -p $(STATIC_DIR) $(DYNAMIC_DIR) $(DEBUG_DIR))

	all: $(STATIC_LIB) $(DYNAMIC_LIB) $(DEBUG_LIB)

$(STATIC_LIB): $(STATIC_OBJ)
	ar rc $@ $(STATIC_OBJ)
	ranlib $@

$(DEBUG_LIB): $(DEBUG_OBJ)
	ar rc $@ $(DEBUG_OBJ)
	ranlib $@

$(DYNAMIC_LIB): $(DYNAMIC_OBJ)
	$(CC) -shared -o $@ $(DYNAMIC_OBJ)

$(STATIC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -I $(HEAD_DIR) -o $@ -c $< $(FLAGS)

$(DEBUG_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -I $(HEAD_DIR) -o $@ -c $< $(FLAGS) -g

$(DYNAMIC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -fPIC -I $(HEAD_DIR) -o $@ -c $< $(FLAGS)

.PHONY: clean fclean re

clean:
	@rm -f $(STATIC_OBJ) $(DYNAMIC_OBJ) $(DEBUG_OBJ)

fclean: clean
	@rm -f $(STATIC_LIB) $(DYNAMIC_LIB) $(DEBUG_LIB)

re: fclean all
