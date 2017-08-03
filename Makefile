# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/10 11:30:22 by aalliot           #+#    #+#              #
#    Updated: 2017/08/03 18:23:05 by aalliot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

STATIC_LIB	= libft.a
DEBUG_LIB	= libft_debug.a
DYNAMIC_LIB	= libft.so

SRC		=	ft_bzero.c				\
			ft_memset.c				\
			ft_memcpy.c				\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memalloc.c			\
			ft_memdel.c				\
			ft_strdup.c				\
			ft_strlen.c				\
			ft_strcpy.c				\
			ft_strncpy.c			\
			ft_strcat.c				\
			ft_strncat.c			\
			ft_strlcat.c			\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strstr.c				\
			ft_strncmp.c			\
			ft_strnstr.c			\
			ft_strcmp.c				\
			ft_strnew.c				\
			ft_strclr.c				\
			ft_strdel.c				\
			ft_strequ.c				\
			ft_striter.c			\
			ft_striteri.c			\
			ft_strjoin.c			\
			ft_strrev.c				\
			ft_strjoin_free.c		\
			ft_strmap.c				\
			ft_strmapi.c			\
			ft_strnequ.c			\
			ft_strsplit.c			\
			ft_strsub.c				\
			ft_putstr_sub.c			\
			ft_strtrim.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_isprint.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_atoi.c				\
			ft_itoa.c				\
			ft_putchar.c			\
			ft_putstr.c				\
			ft_putnbr.c				\
			ft_puthex.c				\
			ft_putptr.c				\
			ft_putnbrll.c			\
			ft_putendl.c			\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_lstnew.c				\
			ft_lstdelone.c			\
			ft_lstdel.c				\
			ft_lstadd.c				\
			ft_lstlen.c				\
			ft_lstiter.c			\
			ft_lstmap.c				\
			ft_lstpushback.c		\
			ft_lstsmartpushback.c	\
			ft_lstsimpledel.c		\
			ft_lstsimpledelone.c	\
			ft_lstdelnode.c			\
			ft_malloc.c				\
			ft_burger.c				\
			ft_kebab.c				\
			ft_swap.c				\
			ft_sort_bbl.c			\
			ft_sort_qck.c			\
			ft_sort_mrg.c			\
			ft_intlen.c				\
			ft_llilen.c				\
			ft_longlen.c			\
			ft_ulonglen.c			\
			ft_binlen.c				\
			ft_putnbrul.c			\
			get_next_line.c			\
			ft_lstdnew.c			\
			ft_lstdadd_circ.c		\
			ft_lstddelone.c

DYNAMIC_OBJ	= $(patsubst %.c,$(DYNAMIC_DIR)/%.o,$(SRC))
STATIC_OBJ	= $(patsubst %.c,$(STATIC_DIR)/%.o,$(SRC))
DEBUG_OBJ	= $(patsubst %.c,$(DEBUG_DIR)/%.o,$(SRC))

DYN_DEPS	= $(patsubst %.c,$(DYNAMIC_DIR)/%.d,$(SRC))
STATIC_DEPS	= $(patsubst %.c,$(STATIC_DIR)/%.d,$(SRC))
DEBUG_DEPS	= $(patsubst %.c,$(DEBUG_DIR)/%.d,$(SRC))

HEAD_DIR	= includes
SRC_DIR		= src
DEBUG_DIR	= debug
STATIC_DIR	= static
DYNAMIC_DIR	= dynamic

CC			= gcc
OPTI		= -O3
DEPS		= -MT $@ -MD -MP -MF $(subst .o,.d,$@)

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	FLAGS	= -Wall -Wextra -Werror -Wno-unused-result
else
	FLAGS	= -Wall -Wextra -Werror
endif
$(shell mkdir -p $(STATIC_DIR) $(DYNAMIC_DIR) $(DEBUG_DIR))

all: $(STATIC_LIB)

debug: $(DEBUG_LIB)

dynamic: $(DYNAMIC_LIB)

$(STATIC_LIB): $(STATIC_OBJ)
	ar rc $@ $(STATIC_OBJ)
	ranlib $@

$(DEBUG_LIB): $(DEBUG_OBJ)
	ar rc $@ $(DEBUG_OBJ)
	ranlib $@

-include $(DYNAMIC_OBJ:.o=.d)

$(DYNAMIC_LIB): $(DYNAMIC_OBJ)
	$(CC) $(OPTI) -shared -o $@ $(DYNAMIC_OBJ)

-include $(STATIC_OBJ:.o=.d)

$(STATIC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(FLAGS) $(OPTI) $(DEPS) -I $(HEAD_DIR) -o $@ -c $<

-include $(DEBUG_OBJ:.o=.d)

$(DEBUG_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(FLAGS) -g $(DEPS) -I $(HEAD_DIR) -o $@ -c $<

$(DYNAMIC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(FLAGS) $(DEPS) -fPIC -I $(HEAD_DIR) -o $@ -c $<

.PHONY: clean fclean re

clean:
	@rm -f $(STATIC_OBJ) $(DYNAMIC_OBJ) $(DEBUG_OBJ)
	@rm -f $(STATIC_DEPS) $(DYN_DEPS) $(DEBUG_DEPS)

fclean: clean
	@rm -f $(STATIC_LIB) $(DYNAMIC_LIB) $(DEBUG_LIB)

re: fclean
	make

reall: all
