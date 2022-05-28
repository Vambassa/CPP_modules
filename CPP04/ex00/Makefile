NAME		= animal

SRCS		= ./main.cpp ./Animal.cpp ./Cat.cpp ./Dog.cpp ./WrongAnimal.cpp ./WrongCat.cpp

OBJS		= $(patsubst %.cpp,%.o,$(SRCS))
HEADER		= ./Animal.hpp ./Cat.hpp ./Dog.hpp ./WrongAnimal.hpp ./WrongCat.hpp

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HEADER)
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re