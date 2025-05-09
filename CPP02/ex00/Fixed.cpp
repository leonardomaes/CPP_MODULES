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

Fixed::Fixed() : fixedNumber(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	this->fixedNumber = obj.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment constructor called\n";
	if (this != &f)
		fixedNumber = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fixedNumber);
}

void Fixed::setRawBits(const int raw)
{
	this->fixedNumber = raw;
}
