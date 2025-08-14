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
NAME = Serializer
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Directories
SRC_DIR := src
BIN_DIR := bin

# Sources & Objects
SRC =	$(SRC_DIR)/main.cpp \
		$(SRC_DIR)/A.cpp \
		$(SRC_DIR)/B.cpp \
		$(SRC_DIR)/C.cpp \
		$(SRC_DIR)/Base.cpp

OBJ = 	$(BIN_DIR)/main.o \
		$(BIN_DIR)/A.o \
		$(BIN_DIR)/B.o \
		$(BIN_DIR)/C.o \
		$(BIN_DIR)/Base.o

# Commands
RM = rm -rf

# Rules
all: $(NAME)

$(NAME) : $(OBJ) | $(BIN_DIR)
	@$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJ)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BIN_DIR)
	@$(CXX) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR):
			mkdir -p $(BIN_DIR)

clean:
			$(RM) $(OBJ) $(BIN_DIR)

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
