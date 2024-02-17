NAME  = Sed_is_for_losers

CFILES  =  main.cpp File.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(CFILES)
		$(CC) $(FLAGS) $(CFILES) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all