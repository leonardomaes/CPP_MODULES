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
	int shortestSpan();
	int longestSpan();
	void addNumber(unsigned int begin, unsigned int end);
	void addNumber(unsigned int *begin, unsigned int *end);
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
