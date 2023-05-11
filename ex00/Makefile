NAME := a.out

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra -Wshadow --std=c++98 -g

SRCS := main.cpp \
	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM ${OBJS}

fclean: clean

re: fclean all

.PHONY: clean fclean re all
