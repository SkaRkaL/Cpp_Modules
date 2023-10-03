NAME = SED_2.0

SRC = main.cpp Replace.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = #-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all