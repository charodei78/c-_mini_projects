CC = clang++
SRC = megaphone.cpp
FLAGS = -Wall -Wextra -Werror
NAME = megaphone
OBJ = $(SRC:.cpp=.o)


all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME);


test: $(NAME)
	$ ./$(NAME) "shhhhh... I think the students are asleep..."
	$ ./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	$ ./$(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.cpp.o:
	$(CC) -c $(FLAGS) $<

$(NAME):
	make all
