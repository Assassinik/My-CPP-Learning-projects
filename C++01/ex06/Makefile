NAME		=	Human

SRC			=	HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp \
				main.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o Human

EXEC		=	Human

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re