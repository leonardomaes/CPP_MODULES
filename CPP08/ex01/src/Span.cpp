/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 20:52:37 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/26 20:52:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span()
{
}

Span::Span(const Span &obj) : _maxNum(obj._maxNum)
{
}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		this->_maxNum = obj._maxNum;
		this->_numbers = obj._numbers;
	}
	return *this;
}

Span::~Span()
{
}


Span::Span(unsigned int N) : _maxNum(N)
{
}

void Span::addNumber(int num)
{
	if (this->_numbers.size() == this->_maxNum)
		throw ContainerFull();
	this->_numbers.push_back(num);
}

int Span::shortestSpan()
{
	if (this->_numbers.size() < 2)
		throw NoSpanFound();

	std::vector<int> cpy(this->_numbers);
	std::sort(cpy.begin(), cpy.end());
	int shortest = cpy[1] - cpy[0];

	for (size_t i = 1; i < this->_maxNum; i++)
	{
		if ((cpy[i] - cpy[i-1]) < shortest)
			shortest = (cpy[i] - cpy[i-1]);
	}
	return shortest;
}

int Span::longestSpan()
{
	if (this->_numbers.size() < 2)
		throw NoSpanFound();
	std::vector<int> cpy(this->_numbers);
	std::copy(this->_numbers.begin(), this->_numbers.end(), cpy.begin());
	std::sort(cpy.begin(), cpy.end());

	return (cpy.back() - cpy.front());
}

void Span::addNumber(unsigned int *begin, unsigned int *end)
{
	std::vector<int> array(begin, end);
	if (this->_maxNum < array.size() + this->_numbers.size())
		throw OutOfRange();
	this->_numbers.insert(this->_numbers.end(), array.begin(), array.end());
}

void Span::addNumber(unsigned int begin, unsigned int end)
{
	std::vector<int> array(begin, end);
	if (this->_maxNum < array.size() + this->_numbers.size())
		throw OutOfRange();
	
	this->_numbers.insert(this->_numbers.end(), array.begin(), array.end());
}

const char* ContainerFull::what() const throw() {	return "Container is already full";	}
const char* OutOfRange::what() const throw() {	return "Cannot add more numbers, max capacity reached";	}
const char* NoSpanFound::what() const throw() {	return "No Span founded";	}
