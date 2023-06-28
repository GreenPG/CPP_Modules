# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 13:30:55 by gpasquet          #+#    #+#              #
#    Updated: 2023/06/28 09:54:47 by gpasquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME =	Fixed 

SRC =	main.cpp \
		Fixed.cpp

OBJS = ${SRC:.cpp=.o}

.cpp.o:
	@printf "Compiling .cpp to .o \r"
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:	$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
	${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}
	@printf '\e[1;37m%-6s\e[m' "Compilation complete"

clean:
	rm -rf ${OBJS}

fclean: clean
	@n=1; \
	if test -e ${NAME}; then \
		if [ $$n -eq 1 ]; then \
			printf "Cleaning files\n"; \
		fi; \
		n=$$((n + 1)); \
		rm ${NAME}; \
	fi

re: fclean all

.PHONY: all clean fclean re
