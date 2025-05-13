/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:40:21 by lmaes             #+#    #+#             */
/*   Updated: 2025/04/27 16:22:26 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int ac, char *av[])
{
	std::string	comm;
	PhoneBook Phone;
	(void)ac;
	(void)av;
	Phone.StartContacts();
	while (1)
	{
		std::cout << "*-------------------MAIN--------------------*" 
			<< std::endl << "Type your command..." << std::endl << "-";
		if (!std::getline(std::cin, comm))
			break;
		if (comm == "EXIT")
			break;
		else if (comm == "ADD")
			Phone.AddContact();
		else if (comm == "SEARCH")
			Phone.SearchContact();
	}
	return 0;
}
