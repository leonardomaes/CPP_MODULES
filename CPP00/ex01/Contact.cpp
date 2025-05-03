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

void	Contact::GetContact(int id)
{
	std::cout << id+1 << " | ";
	std::cout << FirstName <<  " | ";
	std::cout << LastName <<  " | ";
	std::cout << Nickname << std::endl;
	// std::cout << PhoneNumber << std::endl;
	// std::cout << Secret << std::endl;
}

int		Contact::ExistId(){
	return (Init);
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
