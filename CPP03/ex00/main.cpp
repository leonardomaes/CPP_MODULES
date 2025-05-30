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

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Bob");
	ClapTrap b;
	b = a;
	for (size_t i = 0; i < 10; i++)
		b.beRepaired(5);
	b.attack("leo");
	a.beRepaired(5);
	b.beRepaired(5);

	return 0;
}
