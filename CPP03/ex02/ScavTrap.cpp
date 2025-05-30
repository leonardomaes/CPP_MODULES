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
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
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

void ScavTrap::attack(const std::string& target)
{
	if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
	{
		std::cout << "ScavTrap " << this->_name <<  " deals " << this->_attackDamage << " points of damage to " << target << ".\n";
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has no enough energy points to attack\n";
	else
		std::cout << "ScavTrap " << this->_name << " has no enough points to attack\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
	{
		std::cout << "ScavTrap " << this->_name << " was repaired with " << amount << " points." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has no enough energy points to be repaired\n";
	else
		std::cout << "ScavTrap " << this->_name << " has no enough points to be repaired\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if ((this->_hitPoints > 0))
	{
		if ((this->_hitPoints - amount) <= 0)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " has no more hit points remaining.\n";
	}
}

void ScavTrap::printStatus(void)
{
	std::cout << "---------------------------" << std::endl
			<< "->ScavTrap status:" << std::endl
			<< "->Name: " << this->_name << std::endl
			<< "->hitPoints: " << this->_hitPoints << std::endl
			<< "->energyPoints: " << this->_energyPoints << std::endl
			<< "->attackPoints: " << this->_attackDamage << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
