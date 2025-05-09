# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 15:18:15 by lmaes             #+#    #+#              #
#    Updated: 2025/05/05 15:18:19 by lmaes            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compile Options
NAME = harlFilter
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Sources
SRC =	main.cpp Fixed.cpp

# Commands
RM = rm -rf
OBJ = $(SRC:.cpp=.o)

# Rules
all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
