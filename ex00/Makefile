SRC     =   main.cpp \
			Fixed.cpp \

NAME     =    Fixed
CC         =    c++
CFLAGS     = -Wall -Wextra -Werror -std=c++98       
OBJ     =     ${SRC:.cpp=.o}
HEADER = Fixed.hpp
all: ${NAME}


${NAME} : ${OBJ}
	${CC} ${OBJ} $(CFLAGS) -o ${NAME}

%.o : %.cpp $(HEADER)
	${CC} $(CFLAGS)  -c $< -o $@
    
clean :
	@rm -f ${OBJ}

re: fclean all

fclean : clean
	@rm -f ${NAME}
    
.PHONY: all clean fclean re