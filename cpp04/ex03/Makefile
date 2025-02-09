# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/07 20:24:14 by ryagoub           #+#    #+#              #
#    Updated: 2025/02/08 19:45:37 by ryagoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CPPFILES = main.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp MateriaSource.cpp
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
