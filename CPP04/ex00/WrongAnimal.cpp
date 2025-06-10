/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:50 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:23:50 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "Constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "Assign called (WrongAnimal)" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called (WrongAnimal)" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Animal sound... (whatever it is)" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
