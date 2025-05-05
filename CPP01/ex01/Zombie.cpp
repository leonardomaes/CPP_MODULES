/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:03:10 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/05 15:03:11 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		IsNumber(std::string num)
{
	for (int i = 0; num[i]; i++)
	{
		if (isdigit(num[i]) == 0)
			return (0);
	}
	return (1);
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
	std::cout << name << " has been created\n";
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "*" << _name << " was destroyed*" << std::endl;
}
