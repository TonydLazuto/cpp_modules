.PHONY		:	all clean fclean re

NAME		=	ex02

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic -I.

RM			=	/bin/rm -f

OBJ_DIR		=	obj

SRCS		=	main.cpp \
				AAnimal.cpp \
				Cat.cpp \
				Dog.cpp \
				Brain.cpp

OBJS		=	$(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

all: 			$(NAME)

$(NAME): 		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o:	%.cpp
				@mkdir -p $(OBJ_DIR)
				$(CC) $(CFLAGS) -c $< -o $@

clean:			
				rm -rf $(OBJ_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
