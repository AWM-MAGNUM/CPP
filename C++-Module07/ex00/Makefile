NAME = whatever

CFILES = main.cpp

HFILES = whatever.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(CFILES) $(HFILES)
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all