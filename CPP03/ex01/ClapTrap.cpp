/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:55:41 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/15 17:55:42 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() : name("No Name"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << " just appeared!" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : name(n), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << n << " just appeared!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "ClapTrap " << obj.name << " just appeared! (Copy Constructor)" << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " went away!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& f)
{
	// std::cout << "Copy assignment constructor called\n";
	if (this != &f)
	{
		this->name = f.name;
		this->hitPoints = f.hitPoints;
		this->energyPoints = f.energyPoints;
		this->attackDamage = f.attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if ((this->hitPoints > 0) && (this->energyPoints > 0))
	{
		std::cout << "ClapTrap " << this->name <<  " deals " << this->attackDamage << " points of damage to " << target << ".\n";
		this->energyPoints--;
	}
	else if (this->energyPoints <= 0)
		std::cout << "ClapTrap has no enough energy points to be repaired\n";
	else
		std::cout << "ClapTrap has no enough points to be repaired\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->hitPoints > 0) && (this->energyPoints > 0))
	{
		std::cout << "ClapTrap was repaired with " << amount << " points." << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else if (this->energyPoints <= 0)
		std::cout << "ClapTrap has no enough energy points to be repaired\n";
	else
		std::cout << "ClapTrap has no enough points to be repaired\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->hitPoints > 0))
	{
		if ((this->hitPoints - amount) <= 0)
			this->hitPoints = 0;
		else
			this->hitPoints -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " has no more hit points remaining.\n";
	}
	
}

void	ClapTrap::printStatus(void)
{
	std::cout << "->ClapTrap status:" << std::endl
			<< "->Name: " << this->name << std::endl
			<< "->hitPoints: " << this->hitPoints << std::endl
			<< "->energyPoints: " << this->energyPoints << std::endl
			<< "->attackPoints: " << this->attackDamage << std::endl;
}
