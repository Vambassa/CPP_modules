NAME		= attack

SRCS		= ./main.cpp ./HumanA.cpp ./HumanB.cpp ./Weapon.cpp

OBJS		= $(patsubst %.cpp,%.o,$(SRCS))
HEADER		= ./HumanA.hpp ./HumanB.hpp ./Weapon.hpp

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HEADER)
			@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re