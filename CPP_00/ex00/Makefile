# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 14:09:38 by gpasquet          #+#    #+#              #
#    Updated: 2023/03/01 15:35:40 by gpasquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =	c++

FLAGS =	-Wall -Wextra -Werror -std=c++98 -g

NAME = megaphone

SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

all:	${NAME}

.c.o:
	@printf "Compiling .cpp to .o \r"
	@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}
	
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
