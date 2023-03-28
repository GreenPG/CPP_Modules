# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 13:30:55 by gpasquet          #+#    #+#              #
#    Updated: 2022/12/16 13:38:53 by gpasquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = HarlFilter 

SRC = main.cpp \
	  Harl.cpp 

OBJS = ${SRC:.cpp=.o}

.cpp.o:
	@printf "Compiling .cpp to .o \r"
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:	$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
	${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}
	@printf '\e[1;37m%-6s\e[m' "Compilation complete"

clean:

fclean: clean
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

re: fclean all
	@n=1; \
	if test -e ${NAME}; then \
		if [ $$n -eq 1 ]; then \
			printf "Cleaning files\n"; \
		fi; \
		n=$$((n + 1)); \
		rm ${NAME}; \
	fi

.PHONY: all clean fclean re
