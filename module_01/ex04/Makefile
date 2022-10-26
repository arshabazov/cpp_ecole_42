NAME	=	sed_is_for_losers

HEADER	=	str_replcaer.h

SRCS	=	main.cpp str_replacer.cpp

OBJS	=	$(SRCS:%.cpp=%.o)

CC		=	c++
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
