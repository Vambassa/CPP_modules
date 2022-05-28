NAME		= megaphone

SRCS		= ./megaphone.cpp

OBJS		= $(patsubst %.cpp,%.o,$(SRCS))

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp
			@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:		
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

test:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone

.PHONY:		all clean fclean re test