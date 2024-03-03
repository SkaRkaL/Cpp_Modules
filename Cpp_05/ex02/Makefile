SRC		=		main.cpp \
				Bureaucrat.cpp \
				AForm.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp

OBJ		=		$(SRC:.cpp=.o)

HEADERS	=		Bureaucrat.hpp \
				AForm.hpp \
				ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp

NAME	=		bureaucratForm

CXX		=		c++

CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:		%.cpp $(HEADERS)
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			rm -fr $(OBJ)

fclean:		clean
			rm -fr $(NAME)

re:			fclean all

.PHONY:		all clean fclean re