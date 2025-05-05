/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:03:02 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/05 15:03:02 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <cmath>
#include <limits>
#include <cstring>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string &input);
	~Zombie();
	void	announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
