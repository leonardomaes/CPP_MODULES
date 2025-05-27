/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:02:41 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/05 15:02:42 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("Bob");
	ScavTrap b("Joel");
	FragTrap c("Leo");
	/*
	Falta resolver a questao das mensagens 
	do FragTrap e do ScavTrap caso nao tenham energyPoints
	*/
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);

	return 0;
}
