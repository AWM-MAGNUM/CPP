NAME = iter

CFILES = main.cpp

HFILES = iter.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(CFILES) $(HFILES)
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
