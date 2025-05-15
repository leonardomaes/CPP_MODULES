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


//COLORS
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define RESET   "\033[0m"
# define BOLD    "\033[1m"
# define BLINK    "\033[5m" 
# define REVERSE  "\033[7m"


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
