# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 14:09:38 by gpasquet          #+#    #+#              #
#    Updated: 2023/03/02 13:24:20 by gpasquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =	c++

FLAGS =	-Wall -Wextra -Werror -std=c++98 -g

NAME = ex02 

SRC =	tests.cpp \
		Account.cpp 

OBJ = ${SRC:%.cpp=%.o}

all:	${NAME}

%.o: %.cpp
	@printf "Compiling .cpp to .o \r"
	@${CC} ${FLAGS} ${OBJS} -c $< -o $@

$(NAME): ${OBJ}
	@${CC} ${FLAGS} ${OBJ} -o ${NAME} 
	@printf '\e[1;37m%-6s\e[m' "Compilation complete"

clean:
	@n=1; \
	for file in $(OBJ); do \
		if test -e $$file; then \
			if [ $$n -eq 1 ]; then \
				printf "Cleaning .o files \n"; \
			fi; \
			n=$$((n + 1)); \
			rm $$file; \
		fi \
	done

fclean:	clean
	@n=1; \
	if test -e ${NAME}; then \
		if [ $$n -eq 1 ]; then \
			printf "Cleaning files\n"; \
		fi; \
		n=$$((n + 1)); \
		rm ${NAME}; \
	fi

re:	fclean all

.PHONY:	all clean fclean re 
