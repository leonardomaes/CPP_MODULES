/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:45:22 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 19:45:22 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <string.h>

class harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	typedef void (harl::*memFunc)(void);
public:
	harl();
	~harl();
	void	complain(std::string level);
};


