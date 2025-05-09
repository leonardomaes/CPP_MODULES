/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:02:41 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/05 15:02:42 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void	harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!\n\n";
}

void	harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void	harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years, whereas you started working here just last month.\n\n";
}

void	harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now.\n\n";
}

harl::harl()
{
}

harl::~harl()
{
}

int	getLevel(std::string level)
{
	int	i = 0;
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && std::strcmp(levels[i].c_str(), level.c_str()) != 0)
	{
		i++;
	}
	return (i);
}

void	harl::complain(std::string level)
{
	int	lvl;
	// Arrary of pointer to member functions
	// void (harl::*memFunc[4])(void)
	const harl::memFunc functions[4] = {
		&harl::debug,
		&harl::info,
		&harl::warning,
		&harl::error
	};
	lvl = getLevel(level);
	switch (lvl)
	{
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		default:
			for (int i = lvl; i < 4; i++)
				(this->*functions[i])();
	}
}
