/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:52:17 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/27 15:52:18 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No Name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " just appeared!" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : _name(n), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " just appeared!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "ClapTrap " << obj._name << " just appeared! (Copy Constructor)" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f)
{
	if (this != &f)
	{
		this->_name = f._name;
		this->_hitPoints = f._hitPoints;
		this->_energyPoints = f._energyPoints;
		this->_attackDamage = f._attackDamage;
		std::cout << "ClapTrap " << this->_name << " just appeared! (Copy Assign)" << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " went away!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
	{
		std::cout << "ClapTrap " << this->_name <<  " deals " << this->_attackDamage << " points of damage to " << target << ".\n";
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no enough energy points to attack\n";
	else
		std::cout << "ClapTrap " << this->_name << " has no enough points to attack\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
	{
		std::cout << "ClapTrap " << this->_name << " was repaired with " << amount << " points." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no enough energy points to be repaired\n";
	else
		std::cout << "ClapTrap " << this->_name << " has no enough points to be repaired\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
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
		std::cout << "ClapTrap " << this->_name << " has no more hit points remaining.\n";
	}
}

void	ClapTrap::printStatus(void)
{
	std::cout << "---------------------------" << std::endl
			<< "->ClapTrap status:" << std::endl
			<< "->Name: " << this->_name << std::endl
			<< "->hitPoints: " << this->_hitPoints << std::endl
			<< "->energyPoints: " << this->_energyPoints << std::endl
			<< "->attackPoints: " << this->_attackDamage << std::endl;
}
