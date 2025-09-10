/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 20:52:37 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/26 20:52:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <exception>

// Containers
#include <vector>
#include <deque>
#include <list>

// Colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Span
{
private:
	unsigned int _maxNum;
	std::vector<int> _numbers;
public:
	Span();
	Span(const Span &obj);
	Span(unsigned int maxInt);
	~Span();
	Span &operator=(const Span &obj);

	void addNumber(int num);
	unsigned long shortestSpan();
	unsigned long longestSpan();

	void addNumber(int *numbers, size_t size);
	void addNumber(std::vector<int> numbers);
	void addNumber(std::vector<int> numbers, size_t size);

	void printSelf();
};

class ContainerFull : public std::exception {
	const char* what() const throw();
};

class NoSpanFound : public std::exception {
	const char* what() const throw();
};

class OutOfRange : public std::exception {
	const char* what() const throw();
};

class EmptySpan : public std::exception {
	const char* what() const throw();
};
