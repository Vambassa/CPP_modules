NAME		= intern

SRCS		= ./main.cpp ./Bureaucrat.cpp ./Form.cpp ./PresidentialPardonForm.cpp \
				./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp ./Intern.cpp

OBJS		= $(patsubst %.cpp,%.o,$(SRCS))
HEADER		= ./Bureaucrat.hpp ./Form.hpp ./PresidentialPardonForm.hpp ./RobotomyRequestForm.hpp \
				./ShrubberyCreationForm.hpp ./Intern.hpp

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