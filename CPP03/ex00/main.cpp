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
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.attack("Joel");
	a.beRepaired(5);
	b.beRepaired(5);

	return 0;
}
