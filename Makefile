# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 12:00:16 by lahammam          #+#    #+#              #
#    Updated: 2023/02/14 14:56:56 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = container

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp

Include	= Containers/stack.hpp \
			function/equal.hpp function/is_integral.hpp function/lexicographical_compare.hpp \
			function/make_pair.hpp function/pair.hpp

OBJSRC = ${SRCS:.cpp=.o}

CC = c++

%.o:%.cpp ${Include}
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJSRC}  
	${CC} ${CFLAGS} ${OBJSRC} -o ${NAME} 

all: ${NAME}

clean:
	rm -f ${OBJSRC}

fclean: clean
	rm -f ${NAME}

re: fclean all