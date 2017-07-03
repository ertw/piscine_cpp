#!/usr/bin/make -f -j
NAME = top8contacts
OBJECTS = Contact.class.o main.o
CXXFLAGS = -Wall -Werror -Wextra#-g -fno-omit-frame-pointer -fsanitize=address
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:re fclean clean all
