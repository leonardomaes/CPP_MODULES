/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:52:06 by lmaes             #+#    #+#             */
/*   Updated: 2025/07/23 15:52:07 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Constructor called (ScalarConverter)" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	(void)obj;
	std::cout << "Copy Constructor called (ScalarConverter)" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	std::cout << "Assign Operatort called (ScalarConverter)" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called (ScalarConverter)" << std::endl;
}

bool ScalarConverter::isFloat(const std::string literal)
{
	if (literal.length() <= 1 || literal[literal.length() - 1] != 'f')
		return 0;
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return 1;
	if (literal.find('.') == std::string::npos)
		return 0;
	std::string num = literal.substr(0, literal.length() - 1);
	std::istringstream ss(num);
	float f;
	ss >> f;
	if (!ss.fail() && ss.eof())
		return 1;
	return 0;
}

bool ScalarConverter::isDouble(const std::string literal)
{
	if (literal.find('.') == std::string::npos)
		return 0;
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return 1;
	std::istringstream ss(literal);
	double d;
	ss >> d;
	if (!ss.fail() && ss.eof())
		return 1;
	return 0;
}

int ScalarConverter::toInt(const std::string &str)
{
	std::stringstream ss(str);
	int result;
	ss >> result;

	if (ss.fail())
		throw std::runtime_error("Invalid conversion to int");
	return result;
}

bool ScalarConverter::isInt(const std::string literal)
{
	int num;
	try
	{
		if (literal.find_first_not_of("-1234567890") != std::string::npos)
			throw std::runtime_error("Invalid char");
		num = toInt(literal);
		if (num <= INT_MAX && num >= INT_MIN)
			return 1;
		return 0;
	}
	catch(const std::exception& e)
	{
		// std::cout << "Impossible";
		return 0;
	}
	return 0;
}

void ScalarConverter::convertChar(char c)
{
	std::cout << "char: '" << c << "'\n";
	std::cout << "int: " << static_cast<int>(c) << "\n";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f\n";
	std::cout << "double: " << static_cast<double>(c) << "\n";
}
void ScalarConverter::convertDouble(double n)
{
	if (n >= 0 && n <= 127)
	{
		if (std::isprint(n))
			std::cout << "char: '" << static_cast<char>(n) << "'\n";
		else
			std::cout << "char: Non displayable\n";
	}
	else
		std::cout << "char: impossible\n";

	if (std::isnan(n) || n < static_cast<float>(INT_MIN) || n > static_cast<float>(INT_MAX))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(n) << "\n";
	std::cout << std::fixed << std::setprecision(1);
	if (n < FLT_MIN || n > FLT_MAX)
		std::cout << "float: impossible\n";
	else
		std::cout << "float: " << static_cast<float>(n) << "f\n";
	
	std::cout << "double: " << n << "\n";
}
void ScalarConverter::convertFloat(float n)
{
	if (n >= 0 && n <= 127)
	{
		if (std::isprint(n))
			std::cout << "char: '" << static_cast<char>(n) << "'\n";
		else
			std::cout << "char: Non displayable\n";
	}
	else
		std::cout << "char: impossible\n";

	std::cout << std::fixed << std::setprecision(1);
	if (std::isnan(n) || n < static_cast<float>(INT_MIN) || n > static_cast<float>(INT_MAX))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(n) << "\n";

	std::cout << "float: " << n << "f\n";
	std::cout << "double: " << static_cast<double>(n) << "\n";
}
void ScalarConverter::convertInt(int n)
{
	if (n >= 0 && n <= 127)
	{
		if (std::isprint(n))
			std::cout << "char: '" << static_cast<char>(n) << "'\n";
		else
			std::cout << "char: Non displayable\n";
	}
	else
		std::cout << "char: impossible\n";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "int: " << n << "\n";
	std::cout << "float: " << static_cast<float>(n) << "f\n";
	std::cout << "double: " << static_cast<double>(n) << "\n";
}

int ScalarConverter::getType(const std::string literal)
{
	if ((literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'') || (literal.length() == 1 && !std::isdigit(literal[0])))
		return CHAR;
	else if (isFloat(literal))
		return FLOAT;
	else if (isDouble(literal))
		return DOUBLE;
	else if (isInt(literal))
			return INT;
	else
		return INVALID;
}

void ScalarConverter::convert(const std::string literal)
{
	int type = getType(literal);
	// std::cout << type << std::endl;
	if (type == CHAR)
	{
		char s;
		if (literal.length() == 3)
			s = literal[1];
		else
			s = literal[0];
		convertChar(s);
	}
	else if (type == INT)
		convertInt(std::atoi(literal.c_str()));
	else if (type == DOUBLE)
		convertDouble(std::strtod(literal.c_str(), NULL));
	else if (type == FLOAT)
		convertFloat(std::strtof(literal.c_str(), NULL));
	else
		throw std::invalid_argument("Invalid argument");
}
