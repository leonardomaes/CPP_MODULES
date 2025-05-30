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

int main()
{
	ClapTrap a("Bob");
	ScavTrap b("Joel");
	a.printStatus();
	b.printStatus();

	for (size_t i = 0; i < 10; i++)
		a.attack("JOel");
	for (size_t i = 0; i < 50; i++)
		b.beRepaired(5);

	b.guardGate();
	a.printStatus();
	b.printStatus();
	a.beRepaired(5);
	b.attack("Bob");

	return 0;
}
