NAME  = HI_THIS_IS_BRAIN

CFILES  = main.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)


$(NAME) : $(CFILES)
		$(CC) $(FLAGS) $(CFILES) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all
