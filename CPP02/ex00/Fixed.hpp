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

class Fixed
{
private:
	int fixedNumber;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &f);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
