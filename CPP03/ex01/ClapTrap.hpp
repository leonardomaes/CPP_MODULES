/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:55:36 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/15 17:55:37 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

class ClapTrap
{
private:
	std::string name;
	int	hitPoints;
	int	energyPoints;
	int attackDamage;
public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printStatus(void);

	ClapTrap();	// Constructor
	ClapTrap(std::string n);
	ClapTrap &operator=(const ClapTrap &f);	// Assign
	ClapTrap(const ClapTrap &obj);	// Copy
	~ClapTrap();	// Destructor
};

