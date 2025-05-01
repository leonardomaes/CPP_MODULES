# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaes <lmaes@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 15:52:26 by lmaes             #+#    #+#              #
#    Updated: 2025/04/27 15:41:32 by lmaes            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compile Options
NAME = PhoneBook
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Sources
SRC =	main.cpp Contact.cpp PhoneBook.cpp

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