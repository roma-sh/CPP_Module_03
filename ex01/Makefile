# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 13:26:06 by rshatra           #+#    #+#              #
#    Updated: 2024/09/22 19:24:45 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavapTrap
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
