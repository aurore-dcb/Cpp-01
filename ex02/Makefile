NAME	= HiBrain

SRC		= main.cpp
OBJ		= ${SRC:%.cpp=%.o}

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

${NAME}: ${OBJ}
		 ${CC} ${FLAGS} -o ${NAME} ${OBJ}

all:	${NAME}

clean:
		rm -rf ${OBJ}

fclean:	clean
		rm -rf ${NAME}

re:		fclean all

.PHONY: clean fclean all re
