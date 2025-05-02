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

void    PhoneBook::AddContact(int id)
{
	std::string First;
	std::string Last;
	std::string Nick;
	std::string Num;
	std::string Secret;

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
	while (Num.empty())
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
}

void	PhoneBook::SearchContact()
{
	int i = 0;
	std::cout << "*----------CONTACTS-----------*" << std::endl;
	while (c[i].ExistId())
	{
		c[i].GetContact(i);
		i++;
	}
}
