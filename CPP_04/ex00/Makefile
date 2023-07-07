# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 13:30:55 by gpasquet          #+#    #+#              #
#    Updated: 2023/07/07 15:25:37 by gpasquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = 	Animals 

SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp	\
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJS = ${SRC:.cpp=.o}

.cpp.o:
	@printf "Compiling .cpp to .o \r"
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:	$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
	${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}
	@printf '\e[1;37m%-6s\e[m' "Compilation complete"

clean:
	@n=1; \
	for file in $(OBJS); do \
		if test -e $$file; then \
			if [ $$n -eq 1 ]; then \
				printf "Cleaning .o files \n"; \
			fi; \
			n=$$((n + 1)); \
			rm $$file; \
		fi \
	done

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
