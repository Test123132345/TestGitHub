NAME = app

SRC =   main.cpp Module1.cpp Module2.cpp Module3.cpp

SRCDIR = sources/

OBJDIR = objects/


OBJ = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

FLAGS = -Wall -Werror -Wextra 

all: $(NAME)

$(NAME): $(OBJ) 
	g++ $(OBJ) -o $(NAME) $(FLAGS)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	g++ -std=c++17 $(FLAGS) -I ./headers -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
