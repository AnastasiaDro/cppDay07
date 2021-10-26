NAME = ex02
NAME1 = subject
SRC = myMain.cpp
SRC1 = mainSubj.cpp
HEAD = Array.hpp

OBJS = $(SRC:.cpp=.o)
OBJS1 = $(SRC1:.cpp=.o)
CXX = clang++
RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp	$(HEAD) Makefile
			@$(CXX) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(HEAD)
			$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME1):   $(OBJS1) $(HEAD)
			$(CXX) $(CFLAGS) $(OBJS1) -o $(NAME1)

clean:
			@$(RM) $(OBJS) $(OBJS1)

fclean:		clean
			@$(RM) $(NAME) $(NAME1)

re:			fclean all

.PHONY: 	all run clean fclean re