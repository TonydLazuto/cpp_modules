.PHONY		=	all clean fclean re bonus

NAME		=	megaphone

CC			=	g++

CFLAGS		=	-Wall -Wextra -Werror

RM			=	/bin/rm -f

OBJ_DIR		=	obj

SRCS		=	megaphone.cpp \
                main.cpp


OBJS		=	$(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

all: 			$(NAME)

$(NAME): 		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o:	%.cpp
				@mkdir -p $(OBJ_DIR)
				$(CC) -c $< -o $@

clean:			
				rm -rf $(OBJ_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
