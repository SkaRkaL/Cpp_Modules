NAME = Zombie

SRCS = main.cpp src/newZombie.cpp src/randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = #-Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
