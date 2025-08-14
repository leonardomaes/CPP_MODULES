/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:40:38 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/14 11:40:38 by lmaes            ###   ########.fr       */
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

class Base
{
	public:
		virtual ~Base();
		static Base* generate(void);
		static void identify(Base* p);
		static void identify(Base& p);
};
