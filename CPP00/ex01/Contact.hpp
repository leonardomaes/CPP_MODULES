/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:40:21 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/01 11:21:26 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "header.hpp"

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string Secret;
public:
	void	SetContact(std::string First, std::string Last, std::string Nick, std::string Number, std::string Sec);
	void	GetContact();
	// Contact(/* args */);
	// ~Contact();
};

#endif
// Contact::Contact(/* args */)
// {
// }

// Contact::~Contact()
// {
// }

