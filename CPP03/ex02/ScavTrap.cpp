/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:44:36 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/27 16:44:37 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " just appeared!" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap::ClapTrap(n)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " just appeared!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap::ClapTrap(obj)
{
	std::cout << "ScavTrap " << obj._name << " just appeared! (Copy Constructor)" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &f)
{
	ClapTrap::operator=(f);
	std::cout << "ScavTrap " << f._name << " just appeared! (Copy Constructor)" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " went away!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
