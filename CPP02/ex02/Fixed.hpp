/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:09:17 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/09 18:09:17 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <string.h>
#include <cmath>

class Fixed
{
private:
	int fixedNumber;
	static const int bits = 8;
public:
	// Constructors
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int num);
	Fixed(const float num);
	Fixed &operator=(const Fixed &f);
	// Destructor
	~Fixed();
	// Functions
	static Fixed& min(Fixed &f1, Fixed &f2);
	static Fixed min(const Fixed &f1, const Fixed &f2);
	static Fixed& max(Fixed &f1, Fixed &f2);
	static Fixed max(const Fixed &f1, const Fixed &f2);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	// Operators
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	Fixed operator+(const Fixed &f) const;
	Fixed operator-(const Fixed &f) const;
	Fixed operator*(const Fixed &f) const;
	Fixed operator/(const Fixed &f) const;
	bool	operator>(const Fixed &f) const;
	bool	operator<(const Fixed &f) const;
	bool	operator>=(const Fixed &f) const;
	bool	operator<=(const Fixed &f) const;
	bool	operator!=(const Fixed &f) const;
	bool	operator==(const Fixed &f) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
