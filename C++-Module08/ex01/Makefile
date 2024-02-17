NAME = Span

CFILES = main.cpp span.cpp

HFILES = Span.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(CFILES) $(HFILES)
	$(CC) $(FLAGS) $(CFILES) -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
