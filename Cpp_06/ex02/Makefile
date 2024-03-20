NAME = Base

SRCS = main.cpp Base.cpp 

OBJ = $(SRCS:.cpp=.o)

INC = Base.hpp ABC.hpp

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