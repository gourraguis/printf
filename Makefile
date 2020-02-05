# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/03 23:58:14 by agourrag          #+#    #+#              #
#    Updated: 2020/02/05 13:15:03 by agourrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
INC := ft_printf.h
SRC := ft_printf.c \
	   utils/extract_var.c \
	   utils/format_var.c \
	   utils/print_var.c \
	   printers/print_char.c \
	   printers/print_decimal.c \
	   printers/print_unsigned.c \
	   printers/print_hexadecimal.c

OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@make -C libft/
	@mv libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@echo "the magic worked"

%.o :%.c
	@gcc -Wall -Werror -Wextra -I $(INC) -c -o $@ $<

clean:
	# @make clean -C libft/
	@rm -rf $(OBJ)

fclean: clean
	# @make fclean -C libft/
	@rm -rf $(NAME)

re: fclean all
