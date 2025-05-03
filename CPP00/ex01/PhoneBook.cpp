/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:40:21 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/01 11:21:26 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		PhoneBook::IsNumber(std::string num)
{
	for (int i = 0; num[i]; i++)
	{
		if (isdigit(num[i]) == 0)
			return (0);
	}
	return (1);
}

void    PhoneBook::AddContact()
{
	std::string First;
	std::string Last;
	std::string Nick;
	std::string Num;
	std::string Secret;

	if (id == MAX_SIZE)
		id = 0;
	system("clear");
	std::cout << "*----------ADD-CONTACT--------*" << std::endl;
	while (First.empty()){
		std::cout << "First Name:";
		std::getline(std::cin, First);
	}
	while (Last.empty())
	{
		std::cout << "Last Name:";
		std::getline(std::cin, Last);
	}
	while (Nick.empty())
	{
		std::cout << "Nickname:";
		std::getline(std::cin, Nick);
	}
	while (Num.empty() || IsNumber(Num) == 0)
	{
		std::cout << "Phone Number:";
		std::getline(std::cin, Num);
	}
	while (Secret.empty())
	{
		std::cout << "Darkest Secret:";
		std::getline(std::cin, Secret);
	}
	c[id].SetContact(First, Last, Nick, Num, Secret);
	id++;
	std::cout << id << std::endl;		// Apagar
}

void	PhoneBook::SearchContact()
{
	int i;
	i = 0;
	system("clear");
	std::cout << "*----------CONTACTS-----------*" << std::endl;
	while (i < MAX_SIZE && c[i].ExistId())
	{
		c[i].GetContact(i);
		i++;
	}
}

void	PhoneBook::StartContacts()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		c[i].StartContact();
	}
	id = 0;
}
