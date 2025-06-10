/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:24:01 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:24:02 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	this->type = "Dog";
	this->b = new Brain();
	std::cout << "Constructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Copy Constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	Animal::operator=(obj);
	std::cout << "Assign called (Dog)" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->b;
	std::cout << "Destructor called (Dog)" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof... Woof!" << std::endl;
}
