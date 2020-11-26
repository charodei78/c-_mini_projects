
CC = clang++
FLAGS = -Wall -Werror -Wextra -Wconversion
NAME = convert
SRC = convert.cpp


all:
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

test: all
	./$(NAME) 1
	@echo
	./$(NAME) 0
	@echo
	./$(NAME) -1
	@echo
	./$(NAME) 127
	@echo
	./$(NAME) 50
	@echo
	./$(NAME) 42
	@echo
	./$(NAME) 128
	@echo
	./$(NAME) -128
	@echo
	./$(NAME) -129
	@echo
	./$(NAME) -2147483648
	@echo
	./$(NAME) -2147483649
	@echo
	./$(NAME) 2147483647
	@echo
	./$(NAME) 2147483648
	./$(NAME) 2147483647
	@echo
	./$(NAME) 2147483648
	@echo
	./$(NAME) 12345.15
	@echo
	./$(NAME) 12345.15f
	@echo
	./$(NAME) inf
	@echo
	./$(NAME) -inf
	@echo
	./$(NAME) nan
	@echo
	./$(NAME) ok
	@echo
	./$(NAME) o
	@echo
	./$(NAME) " "
	@echo
