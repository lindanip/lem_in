# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshabang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 17:24:43 by lshabang          #+#    #+#              #
#    Updated: 2019/09/22 14:49:40 by lshabang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem_in.a

C = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCES = atoi_long.c display_error.c isnum.c

OBJECTS = atoi_long.o display_error.o isnum.o

all: $(NAME)

$(NAME):
	make re -C libft
	$(C) $(CFLAGS) $(SOURCES) -c
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	$(C) $(CFLAGS) main.c $(NAME) libft/libft.a -o lem_in

clean:
	make fclean -C libft
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
