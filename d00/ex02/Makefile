#!/usr/bin/make -j$(getconf _NPROCESSORS_ONLN) -f
NAME = account.out
OBJECTS = Account.class.o tests.o
CXXFLAGS =#-Wall -Werror -Wextra#-g -fno-omit-frame-pointer -fsanitize=address
#MAKEFLAGS = -j$(getconf _NPROCESSORS_ONLN)
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:re fclean clean all
