CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp

NAME = Span

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp  Span.hpp 
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean :  clean
	$(RM) $(NAME)

re : fclean all