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
NAME = PmergeMe
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Directories
SRC_DIR := src
INC_DIR := inc
BIN_DIR := bin

# Sources & Objects
SRC =	$(SRC_DIR)/main.cpp $(SRC_DIR)/PmergeMe.cpp

OBJ = 	$(SRC:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)

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

dir:
			mkdir -p $(SRC_DIR)
			mkdir -p $(INC_DIR)
			touch src/main.cpp

re: fclean all

$(INC_DIR)/%.hpp:
	@mkdir -p $(INC_DIR)
	@echo "#pragma once" > $@
	@echo "" >> $@
	@echo "#include <algorithm>" >> $@
	@echo "#include <cctype>" >> $@
	@echo "#include <cmath>" >> $@
	@echo "#include <ctime>" >> $@
	@echo "#include <cstdlib>" >> $@
	@echo "#include <cstring>" >> $@
	@echo "#include <exception>" >> $@
	@echo "#include <fstream>" >> $@
	@echo "#include <limits>" >> $@
	@echo "#include <iostream>" >> $@
	@echo "#include <iomanip>" >> $@
	@echo "#include <iterator>" >> $@
	@echo "#include <sstream>" >> $@
	@echo "#include <string>" >> $@
	@echo "#include <unistd.h>" >> $@
	@echo "" >> $@
	@echo "// Containers" >> $@
	@echo "#include <deque>" >> $@
	@echo "#include <vector>" >> $@
	@echo "#include <stack>" >> $@
	@echo "#include <list>" >> $@
	@echo "#include <map>" >> $@
	@echo "" >> $@
	@echo "// Colors" >> $@
	@echo "#define RESET   \"\\033[0m\"" >> $@
	@echo "#define BLACK   \"\\033[30m\"" >> $@
	@echo "#define RED     \"\\033[31m\"" >> $@
	@echo "#define GREEN   \"\\033[32m\"" >> $@
	@echo "#define YELLOW  \"\\033[33m\"" >> $@
	@echo "#define BLUE    \"\\033[34m\"" >> $@
	@echo "#define MAGENTA \"\\033[35m\"" >> $@
	@echo "#define CYAN    \"\\033[36m\"" >> $@
	@echo "#define WHITE   \"\\033[37m\"" >> $@
	@echo "" >> $@
	@echo "// Background colors" >> $@
	@echo "#define BCK_BLACK   \"\\033[40m\"" >> $@
	@echo "#define BCK_RED     \"\\033[41m\"" >> $@
	@echo "#define BCK_GREEN   \"\\033[42m\"" >> $@
	@echo "#define BCK_YELLOW  \"\\033[43m\"" >> $@
	@echo "#define BCK_BLUE    \"\\033[44m\"" >> $@
	@echo "#define BCK_MAGENTA \"\\033[45m\"" >> $@
	@echo "#define BCK_CYAN    \"\\033[46m\"" >> $@
	@echo "#define BCK_WHITE   \"\\033[47m\"" >> $@

.PHONY: all clean fclean re
