/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:50 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:23:50 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Constructor called (Animal)" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Copy constructor called (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Assign called (Animal)" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor called (Animal)" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound... (whatever it is)" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
