NAME  = AAnimal

CFILES  =  main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(CFILES)
		$(CC) $(FLAGS) $(CFILES) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all