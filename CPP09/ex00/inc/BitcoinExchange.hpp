/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:13:19 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/15 18:13:20 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <exception>
#include <unistd.h>
#include <cmath>
#include <limits>
#include <cstring>
#include <iostream>
#include <fstream>

// Containers
#include <vector>
#include <stack>
#include <deque>
#include <list>
#include <map>

// Colors
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// Background colors
#define BCK_BLACK   "\033[40m"
#define BCK_RED     "\033[41m"
#define BCK_GREEN   "\033[42m"
#define BCK_YELLOW  "\033[43m"
#define BCK_BLUE    "\033[44m"
#define BCK_MAGENTA "\033[45m"
#define BCK_CYAN    "\033[46m"
#define BCK_WHITE   "\033[47m"

class BitcoinExchange
{
private:
	std::map<std::string, double> _map;
	void ParseInput(char *av);
	void ParseInputLine(std::string line);
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& obj);
	BitcoinExchange operator=(const BitcoinExchange& obj);
	~BitcoinExchange();

	BitcoinExchange(char *av);

	class InvalidInput : public std::exception { const char* what() const throw(); };
	class InvalidExtension : public std::exception { const char* what() const throw(); };
	class CouldNotOpenFile : public std::exception { const char* what() const throw(); };
	class InvalidHeader : public std::exception { const char* what() const throw(); };
	class InvalidDate : public std::exception { const char* what() const throw(); };
};
