NAME  = ex02

CFILES  =  main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

all : $(NAME)

$(NAME) : $(CFILES)
		$(CC) $(FLAGS) $(CFILES) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all