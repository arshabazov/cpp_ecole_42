NAME	=	phonebook

HEADER	=	phone_book_project.h

SRCS	=	main.cpp\
			\
			Model/Contact.cpp\
			Model/PhoneBook.cpp\
			\
			Controller/AddCmdProcessing.cpp\
			Controller/SearchCmdPRocessing.cpp\
			\
			Utils/PrintMessages.cpp\
			Utils/StringProcessing.cpp

OBJS	=	$(SRCS:%.cpp=%.o)

CC		=	g++
FLAGS1	=	-Wall -Wextra -Werror
FLAGS2	=	-std=c++98

.PHONY	:	all clear fclear re

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(FLAGS1) $(FLAGS2) $(OBJS) -o $(NAME)

%.o		:	%.cpp $(HEADER)
			$(CC) $(FLAGS1) $(FLAGS2)  -c $< -o $@

clean	:
		@$(RM) $(OBJS)

fclean	:	clean
		@$(RM) $(NAME)

re		:	fclean all