/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:51:13 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 17:51:13 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string input1)
{
	name = input1;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << name << "has no weapon\n";
}

void	HumanB::setWeapon(Weapon &input)
{
	this->weapon = &input;
}
