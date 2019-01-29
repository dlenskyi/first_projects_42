# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 15:14:24 by dlenskyi          #+#    #+#              #
#    Updated: 2018/10/23 19:38:07 by dlenskyi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/main.c
OBJECT = ft_putchar.o ft_putstr.o main.o ft_putnbr.o
HEADER = ./includes/

all: $(NAME)

$(NAME):
	@gcc -o $(NAME) -Wall -Wextra -Werror -I$(HEADER) $(SRC)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
