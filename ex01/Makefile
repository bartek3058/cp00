# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 16:27:36 by brogalsk          #+#    #+#              #
#    Updated: 2025/10/17 16:32:40 by brogalsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
SRC =	main.cpp\
		Contact.cpp\
		PhoneBook.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME):	$(OBJ)
			${CC} ${CFLAGS} ${OBJ} -o ${NAME}
clean:
			rm -f ${OBJ}
fclean:		clean
			rm -f ${NAME}
re:			fclean all

.PHONY:		all clean fclean re
