NAME		= brain

SRCS		= ./main.cpp ./Animal.cpp ./Cat.cpp ./Dog.cpp ./Brain.cpp

OBJS		= $(patsubst %.cpp,%.o,$(SRCS))
HEADER		= ./Animal.hpp ./Cat.hpp ./Dog.hpp ./Brain.hpp

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