# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 12:01:17 by ryagoub           #+#    #+#              #
#    Updated: 2025/02/03 15:20:36 by ryagoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CPPFILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++

all: $(NAME)

$(NAME):
	$(CPP) $(CFLAGS) $(CPPFILES) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
