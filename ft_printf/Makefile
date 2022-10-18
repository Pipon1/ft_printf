# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 10:18:48 by hefurrer          #+#    #+#              #
#    Updated: 2022/10/18 11:36:36 by hefurrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
INCLUDES := includes
LIBFT := libft
SRC_DIR := src/
OBJ_DIR := obj/
CC := gcc
CFLAGS := -Wall -Werror -Wextra -I
RM := rm
AR := ar rc
SRC_FILES := ft_printf ft_strandptr ft_unsignedptr ft_hexabase ft_adress
SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJF := .cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJF):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) -rf $(OBJ_DIR)
	make clean -C $(LIBFT)

fclean: clean
	$(RM) -f $(NAME)
	$(RM) -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
