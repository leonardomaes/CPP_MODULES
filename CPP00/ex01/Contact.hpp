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

#include <iostream>
#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <cmath>
#include <limits>
#include <cstring>
# define MAX_SIZE 8
# define MAX_LEN 10

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string Secret;
	bool		Init;
public:
	void	SetContact(std::string First, std::string Last, std::string Nick, std::string Number, std::string Sec);
	void	GetContact(int id);
	int		ExistId();
	void	StartContact();
	void	TruncateSize(std::string &str);
	void	ShowIdContact();
};

#endif
