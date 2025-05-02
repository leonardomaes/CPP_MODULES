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
	int	id = 0;
	(void)ac;
	(void)av;
	while (1)
	{
		std::cout << "*-----------------------------*" << std::endl;
		std::cout << "Type your command..." << std::endl;
		std::getline(std::cin, comm);
		for (int i = 0; comm[i]; i++)
			comm[i] = tolower(comm[i]);
		if (comm == "exit")
			break;
		else if (comm == "add")
		{
			if (id == 7)
				id = 0;
			Phone.AddContact(id);
			id++;
			std::cout << id << std::endl;
		}
		else if (comm == "search")
		{
			Phone.SearchContact();
		}
		
		
	}
	//Contact c;
	//c.SetContact("Leonardo", "Maes", "Leo", "934 998 052", "test");
	//c.GetContact();
	return 0;
}
