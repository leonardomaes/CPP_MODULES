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
	std::string _name;
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
int		IsNumber(std::string num);
