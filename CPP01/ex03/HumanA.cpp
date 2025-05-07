/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:06:09 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 18:06:09 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string input1, Weapon &input2) : name(input1), weapon(input2)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
}
