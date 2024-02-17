NAME  = Harl_2.0

CFILES  =  main.cpp Harl.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(CFILES)
		$(CC) $(FLAGS) $(CFILES) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all