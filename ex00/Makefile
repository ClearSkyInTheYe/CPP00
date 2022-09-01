NAME = megaphone

SRCS = megaphone.cpp

CPP =  c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean	:
		rm -rf  $(NAME)

fclean	:	clean

re		:	fclean $(NAME)