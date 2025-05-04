/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:40:21 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/01 11:21:26 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::SetContact(std::string First, std::string Last, std::string Nick, std::string Number, std::string Sec)
{
	FirstName = First;
	LastName = Last;
	Nickname = Nick;
	PhoneNumber = Number;
	Secret = Sec;
	Init = true;
}

int	StrLen(std::string str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	Contact::StartContact()
{
	FirstName = "";
	LastName = "";
	Nickname = "";
	PhoneNumber = "";
	Secret = "";
	Init = false;
}

void	Contact::TruncateSize(std::string &str)
{
	if (StrLen(str) > MAX_LEN)
	{
		str.resize(MAX_LEN - 1);
		str += ".";
	}
}

int		Contact::ExistId(){
	return (Init);
}

void	Contact::GetContact(int id)
{
	std::string	First = FirstName;
	std::string	Last = LastName;
	std::string	Nick = Nickname;
	TruncateSize(First);
	TruncateSize(Last);
	TruncateSize(Nick);
	std::cout << std::right << "|" << std::setw(10) << id+1
			<< "|" << std::setw(10) << First
			<< "|" << std::setw(10) << Last
			<< "|" << std::setw(10) << Nick << "|" << std::endl;
}

void	Contact::ShowIdContact()
{
	std::cout << std::left << std::setw(12) << "First Name:" << FirstName << std::endl
			<< std::setw(12) << "Last Name:" << LastName << std::endl
			<< std::setw(12) << "Nickname:" << Nickname << std::endl
			<< std::setw(12) << "Number:" << PhoneNumber << std::endl
			<< std::setw(12) << "Secret:" << Secret << std::endl;
}
