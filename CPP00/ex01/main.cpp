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
	system("clear");
	while (1)
	{
		std::cout << "*-------------------MAIN--------------------*" 
			<< std::endl << "Type your command..." << std::endl << "-";
		if (!std::getline(std::cin, comm))		// Ctrl + D
			break;
		for (int i = 0; comm[i]; i++)
			comm[i] = tolower(comm[i]);

		if (comm == "exit")
			break;
		else if (comm == "add")
			Phone.AddContact();
		else if (comm == "search")
			Phone.SearchContact();
	}
	system("clear");
	return 0;
}
