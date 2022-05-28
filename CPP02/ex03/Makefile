NAME		= bsp

SRCS		= ./main.cpp ./Fixed.cpp ./Point.cpp ./bsp.cpp

OBJS		= $(patsubst %.cpp,%.o,$(SRCS))
HEADER		= ./Fixed.hpp ./Point.hpp

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