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

#include "Zombie.hpp"

int	main()
{
	std::string num;
	std::string name;
	int			n;
	while (1)
	{
		std::cout << "->Type a name:";
		if (!std::getline(std::cin, name) || name == "exit")
			return (0);
		if (!name.empty())
			break ;
	}
	while (1)
	{
		std::cout << "->Type a number:";
		if (!std::getline(std::cin, num) || num == "exit")
			return (0);
		if (IsNumber(num) && num.size() < 6 && !num.empty())
			break ;
	}
	n = atoi(num.c_str());
	if (n <= 0)
		return (std::cout << "->Invalid num D:\n", 0);
	
	Zombie *horde = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
