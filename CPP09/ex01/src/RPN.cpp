/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:36:38 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/25 19:36:39 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN& obj)
{
	this->_stack = obj._stack;
}

RPN RPN::operator=(const RPN& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return *this;
}

RPN::~RPN()
{
}

RPN::RPN(char *str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (std::isdigit(str[i]) && std::isdigit(str[i+1]))
			throw InvalidArgument();
		if (std::isdigit(str[i]))
			_stack.push(str[i] - '0');
		else if (std::isspace(str[i]))
			continue;
		else if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
		{
			if (_stack.size() < 2)
				throw InvalidArgument();
			int a;
			int b;
			b = _stack.top();
			_stack.pop();
			a = _stack.top();
			_stack.pop();
			if (str[i] == '+')
				_stack.push(a + b);
			if (str[i] == '-')
				_stack.push(a - b);
			if (str[i] == '*')
				_stack.push(a * b);
			if (str[i] == '/')
				_stack.push(a / b);
		}
		else
			throw InvalidArgument();
	}
	if (_stack.size() != 1)
		throw InvalidArgument();
	std::cout << _stack.top() << std::endl;
}

const char* RPN::InvalidArgument::what() const throw() { return "Invalid arguments!!"; }
