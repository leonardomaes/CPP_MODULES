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
	ClapTrap clap("Bob");
	ScavTrap scav("Joel");
	FragTrap frag("Leo");
	clap.printStatus();
	scav.printStatus();
	frag.printStatus();

	return 0;
}
