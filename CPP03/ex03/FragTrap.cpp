/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:25:37 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/27 18:25:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " just appeared!" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap::ClapTrap(n)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " just appeared!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap::ClapTrap(obj)
{
	std::cout << "FragTrap " << obj._name << " just appeared!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
	ClapTrap::operator=(f);
	std::cout << "FragTrap " << f._name << " just appeared! (Copy Constructor)" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " went away!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
	{
		std::cout << "FragTrap " << this->_name <<  " deals " << this->_attackDamage << " points of damage to " << target << ".\n";
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has no enough energy points to attack\n";
	else
		std::cout << "FragTrap " << this->_name << " has no enough points to attack\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
	{
		std::cout << "FragTrap " << this->_name << " was repaired with " << amount << " points." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has no enough energy points to be repaired\n";
	else
		std::cout << "FragTrap " << this->_name << " has no enough points to be repaired\n";
}

void FragTrap::takeDamage(unsigned int amount)
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
		std::cout << "FragTrap " << this->_name << " has no more hit points remaining.\n";
	}
}

void FragTrap::printStatus(void)
{
	std::cout << "---------------------------" << std::endl
			<< "->FragTrap status:" << std::endl
			<< "->Name: " << this->_name << std::endl
			<< "->hitPoints: " << this->_hitPoints << std::endl
			<< "->energyPoints: " << this->_energyPoints << std::endl
			<< "->attackPoints: " << this->_attackDamage << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " request high fives" << std::endl;
}
