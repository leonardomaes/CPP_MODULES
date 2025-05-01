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
	while (1)
	{
		std::cout << "*-----------------------------*" << std::endl;
		std::getline(std::cin, comm);
		for (int i = 0; comm[i]; i++)
			comm[i] = tolower(comm[i]);
		if (comm == "exit")
			break;
		else if (comm == "add")
		{
			Phone.AddContact();
		}
		
	}
	Contact c;
	c.SetContact("Leonardo", "Maes", "Leo", "934 998 052", "test");
	c.GetContact();
	return 0;
}
