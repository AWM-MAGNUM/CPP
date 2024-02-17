# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 20:54:28 by bel-kase          #+#    #+#              #
#    Updated: 2023/11/05 12:10:06 by bel-kase         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = Fixed

CFILES  =  main.cpp Fixed.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(CFILES)
		$(CC) $(CFLAGS) $(CFILES) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all