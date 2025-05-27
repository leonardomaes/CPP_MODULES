/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:52:22 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/27 15:52:23 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

class ClapTrap
{
protected:
	std::string _name;
	int	_hitPoints;
	int	_energyPoints;
	int	_attackDamage;
public:
	ClapTrap();					// Constructor
	ClapTrap(std::string n);	// Constructor
	ClapTrap &operator=(const ClapTrap &f);	// Assign
	ClapTrap(const ClapTrap &obj);	// Copy
	~ClapTrap();				// Destructor

	// Functions
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	// void	printStatus(void);
};

#endif
