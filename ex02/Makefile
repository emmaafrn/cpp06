NAME = veritableType

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

INC = A.hpp B.hpp C.hpp Base.hpp

CXX  = clang++

RM  = rm -f

INC_CMP = -I .

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(INC_CMP) $(OBJS) -o $(NAME)

$(OBJS):		$(INC)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			 fclean all

.PHONY: all clean fclean re