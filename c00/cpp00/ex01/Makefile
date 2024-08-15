SRC = PhoneBook.cpp Contact.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

# ANSI color codes
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m # No Color

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling...$(NC)"
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled!$(NC)"
	@echo "$(GREEN)Usage: ./phonebook $(NC)"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re