# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 15:52:11 by lmaes             #+#    #+#              #
#    Updated: 2025/06/20 15:52:12 by lmaes            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compile Options
NAME = Polymorph
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Sources
SRC =	main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

# Commands
RM = rm -rf
OBJ = $(SRC:.cpp=.o)

# Rules
all: $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

