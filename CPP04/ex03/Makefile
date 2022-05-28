NAME		= materia

SRCS		= ./main.cpp ./AMateria.cpp ./Character.cpp \
				./Cure.cpp ./Ice.cpp ./MateriaSource.cpp

OBJS		= $(patsubst %.cpp,%.o,$(SRCS))
HEADER		= ./AMateria.hpp ./Character.hpp ./Cure.hpp ./Ice.hpp \
				./ICharacter.hpp ./IMateriaSource.hpp ./MateriaSource.hpp

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