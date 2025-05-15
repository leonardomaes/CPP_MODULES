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

void	PhoneBook::StartContacts()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		c[i].StartContact();
	}
	id = 0;
}

void	PrintHeader()
{
	std::cout << "+----------+----------+----------+----------+\n"
			<< std::left << "|" << std::setw(10) << "Index"
			<< "|" << std::setw(10) << "First"
			<< "|" << std::setw(10) << "Last"
			<< "|" << std::setw(10) << "Nick" << "|" << std::endl
			<< "+----------+----------+----------+----------+\n";
}

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
	std::cout << "*----------------ADD-CONTACT----------------*" << std::endl;
	while (First.empty()){
		std::cout << "First Name:";
		if (!std::getline(std::cin, First))
			return ;
	}
	while (Last.empty())
	{
		std::cout << "Last Name:";
		if (!std::getline(std::cin, Last))
			return ;
	}
	while (Nick.empty() || Nick == "")
	{
		std::cout << "Nickname:";
		if (!std::getline(std::cin, Nick))
			return ;
	}
	while (Num.empty() || IsNumber(Num) == 0)
	{
		std::cout << "Phone Number:";
		if (!std::getline(std::cin, Num))
			return ;
	}
	while (Secret.empty())
	{
		std::cout << "Darkest Secret:";
		if (!std::getline(std::cin, Secret))
			return ;
	}
	c[id].SetContact(First, Last, Nick, Num, Secret);
	id++;
}

void	PhoneBook::SearchContact()
{
	int count = 0;
	std::string	comm = "";

	std::cout << "*------------------CONTACTS-----------------*" << std::endl;
	for (int i = 0; i < MAX_SIZE; ++i)	//Count how much contacts exists
	{
		if (c[i].ExistId())
			count++;
	}
	if (count == 0)	// If there is no contact
	{
		std::cout << "There is no contacts available." << std::endl;
		return;
	}
	if (count == 8)	//Print contacts, oldest first
	{
		PrintHeader();
		for (int i = 0; i < count; ++i)
		{
			int index = (id + i) % MAX_SIZE;
			if (c[index].ExistId())
				c[index].GetContact(i);
		}
	}
	else	// If there is less than 8 contacts, so it don't use '% MAX_SIZE'
	{
		PrintHeader();
		for (int i = 0; i < id; i++)
		{
			c[i].GetContact(i);
			std::cout << "*-------------------------------------------*\n";
		}
	}

	std::cout << "Type ID..." << std::endl << "-";
	while (1)
	{
		if (!std::getline(std::cin, comm))
			return ;
		if (comm.empty() || IsNumber(comm) == 0)
		{
			std::cout << "Invalid ID, type it again or type 0 to exit.." << std::endl << "-";
			continue ;
		}

		int i = atoi(comm.c_str());
		if (i > 8 || i < 0)
		{
			std::cout << "Invalid ID, type it again or type 0 to exit.." << std::endl << "-";
			continue ;
		}
		else if (i == 0)
		{
			std::cout << "Leaving contact list.." << std::endl;
			break ;
		}
		else if (c[i-1].ExistId())
		{
			std::cout << "*------------------CONTACTS-----------------*" << std::endl;
			if (count == 8)
				c[(id + (i-1)) % MAX_SIZE].ShowIdContact();
			else
				c[i-1].ShowIdContact();
			break ;
		}
		else
			std::cout << "Invalid ID, type it again or type 0 to exit.." << std::endl << "-";
	}
}

