/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:09:11 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/09 18:09:13 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructor
Fixed::Fixed() : fixedNumber(0)
{
	// std::cout << "Default constructor called\n";
}

//Copy Constructor
Fixed::Fixed(const Fixed &obj)
{
	// std::cout << "Copy constructor called\n";
	this->fixedNumber = obj.getRawBits();
}

// Int Constructor
Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called\n";
	this->fixedNumber = num << this->bits;
}

// Float Constructor
Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called\n";
	this->fixedNumber = roundf(num * (1 << this->bits));
}

//Copy Constructor
Fixed &Fixed::operator=(const Fixed& f)
{
	// std::cout << "Copy assignment constructor called\n";
	if (this != &f)
		fixedNumber = f.getRawBits();
	return *this;
}

//Destructor
Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}


// Functions
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return(this->fixedNumber);
}

void Fixed::setRawBits(const int raw)
{
	this->fixedNumber = raw;
}

int	Fixed::toInt(void) const
{
	return this->fixedNumber >> this->bits;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixedNumber) / (1 << this->bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

// Comparison operators
bool Fixed::operator>(const Fixed &f) const
{
	return (this->fixedNumber > f.fixedNumber);
}
bool Fixed::operator<(const Fixed &f) const
{
	return (this->fixedNumber < f.fixedNumber);
}
bool Fixed::operator>=(const Fixed &f) const
{
	return (this->fixedNumber >= f.fixedNumber);
}
bool Fixed::operator<=(const Fixed &f) const
{
	return (this->fixedNumber <= f.fixedNumber);
}
bool Fixed::operator!=(const Fixed &f) const
{
	return (this->fixedNumber != f.fixedNumber);
}
bool Fixed::operator==(const Fixed &f) const
{
	return (this->fixedNumber == f.fixedNumber);
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &f) const
{
	return Fixed(this->toFloat() + f.toFloat());
}
Fixed Fixed::operator-(const Fixed &f) const
{
	return Fixed(this->toFloat() - f.toFloat());
}
Fixed Fixed::operator*(const Fixed &f) const
{
	return Fixed(this->toFloat() * f.toFloat());
}
Fixed Fixed::operator/(const Fixed &f) const
{
	return Fixed(this->toFloat() / f.toFloat());
}

// increment/decrement operators
Fixed &Fixed::operator++()
{
	this->fixedNumber++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->fixedNumber++;
	return temp;
}
Fixed &Fixed::operator--()
{
	this->fixedNumber--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->fixedNumber--;
	return temp;
}


Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}
Fixed Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}
Fixed Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}
