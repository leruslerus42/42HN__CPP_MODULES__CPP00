# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruslan <ruslan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 10:01:19 by rrajaobe          #+#    #+#              #
#    Updated: 2022/05/05 01:50:45 by ruslan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ #clang+++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = 	phonebook

SRC = 	main.cpp \
		./classes/contact.cpp \
		./classes/phonebook.cpp \
	
OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f *.o
		rm -f ./src/*.o

fclean: clean
		rm -f $(NAME)

re: fclean all