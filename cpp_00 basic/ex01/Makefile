CC = clang++
SRC = 	Phonebook.cpp main.cpp
FLAGS = -Wall -Wextra -Werror
NAME = note.exe
OBJ = $(SRC:.cpp=.o)


all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME);


clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.cpp.o:
	$(CC) -c $(FLAGS) $<

$(NAME):
	make all
