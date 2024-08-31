SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fixed

# ANSI color codes
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m # No Color

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(YELLOW)Compiling...$(NC)"
	@echo "$(GREEN)$(NAME) compiled!$(NC)"
	@echo "$(GREEN)Usage: ./fixed $(NC)"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re