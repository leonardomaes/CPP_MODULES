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

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " request high fives" << std::endl;
}
