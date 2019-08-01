# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrief <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 16:43:56 by lkrief            #+#    #+#              #
#    Updated: 2019/07/25 21:53:31 by lkrief           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

LIBNAME = ft

SRC = ft_lib.c

MAIN = main.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc lib$(LIBNAME).a *.o
	gcc -Wall -Werror -Wextra -L. -l$(LIBNAME) $(MAIN) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f lib$(LIBNAME).a
	/bin/rm -f $(NAME)

re: fclean all
