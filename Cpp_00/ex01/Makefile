
# ============ MAKEFILE ============

NAME = PhoneBook

SRCS = main.cpp \
		src/Phonebook.cpp \
		src/contact.cpp 

OBJS = $(SRCS:.cpp=.o)

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

.o: .cpp *.hpp */*.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean