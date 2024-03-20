NAME = convert

SRCS = main.cpp ScalarConverter.cpp

OBJ = $(SRCS:.cpp=.o)

INC = ScalarConverter.hpp

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all