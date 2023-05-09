NAME := a.out

CC := c++

CFLAGS := -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98 -g

SRCS := main.cpp \
	AMateria.cpp \
	ICharacter.cpp \
	Ice.cpp \
	Cure.cpp \

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM ${OBJS}

fclean: clean

re: fclean all

.PHONY: clean fclean re all
