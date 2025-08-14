/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:52:06 by lmaes             #+#    #+#             */
/*   Updated: 2025/07/23 15:52:07 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <limits>
#include <memory>
#include <math.h>
#include <float.h>
#include <iomanip>
#include <stdint.h>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define INVALID 404

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &obj);
	Serializer &operator=(const Serializer &obj);
	~Serializer();
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
