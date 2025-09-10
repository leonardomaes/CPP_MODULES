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

unsigned long Span::shortestSpan()
{
	if (this->_numbers.size() < 2)
		throw NoSpanFound();

	std::vector<int> cpy(this->_numbers);
	std::sort(cpy.begin(), cpy.end());
	unsigned long shortest = cpy[1] - cpy[0];

	for (size_t i = 1; i < this->_numbers.size(); i++)
	{
		unsigned long var = (long)cpy[i] - (long)cpy[i-1];
		if (var < shortest)
			shortest = var;
	}
	return shortest;
}

unsigned long Span::longestSpan()
{
	if (this->_numbers.size() < 2)
		throw NoSpanFound();
	std::vector<int> cpy(this->_numbers);
	std::copy(this->_numbers.begin(), this->_numbers.end(), cpy.begin());
	std::sort(cpy.begin(), cpy.end());
	unsigned long result = (long)cpy.back() - (long)cpy.front();
	return (result);
}

void Span::addNumber(int *numbers, size_t size) // Add with INT array
{
	if (this->_maxNum < size + this->_numbers.size())
		throw OutOfRange();
	for (size_t i = 0; i < size; i++)
	{
		this->addNumber(numbers[i]);
	}
}

void Span::addNumber(std::vector<int> numbers) // Add with vector
{
	if (this->_maxNum < numbers.size() + this->_numbers.size())
		throw OutOfRange();
	this->_numbers.insert(this->_numbers.end(), numbers.begin(), numbers.end());
}
void Span::addNumber(std::vector<int> numbers, size_t size) // Add with vector
{
	if (this->_maxNum < numbers.size() + this->_numbers.size())
		throw OutOfRange();
	this->_numbers.insert(this->_numbers.end(), numbers.begin(), numbers.begin() + size);
}

void Span::printSelf(void)
{
	std::cout << "Printing span: " << std::endl;
	if (this->_numbers.size() == 0)
		throw EmptySpan();
	for (size_t i = 0; i < this->_numbers.size(); i++)
	{
		std::cout << GREEN << "Span[" << RESET << i << GREEN << "] = " << RESET << this->_numbers[i] << std::endl;
	}
}

const char* ContainerFull::what() const throw() {	return "Container is already full";	}
const char* OutOfRange::what() const throw() {	return "Cannot add more numbers, max capacity reached";	}
const char* NoSpanFound::what() const throw() {	return "No Span founded";	}
const char* EmptySpan::what() const throw() {	return "Span is empty";	}
