NAME         = Bureaucrat

CC            = c++

CPPFLAGS    = -Wall -Wextra -Werror -std=c++98

SRC            = main.cpp Bureaucrat.cpp

OBJDIR         = obj

OBJ            = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.cpp=.o)))

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.cpp Bureaucrat.hpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean