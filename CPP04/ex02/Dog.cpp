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
	this->brain = new Brain();
	std::cout << "Constructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	this->brain = new Brain(*obj.brain);
	std::cout << "Copy Constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Assign called (Dog)" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete this->brain;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor called (Dog)" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof... Woof!" << std::endl;
}

Brain	Dog::getBrain()
{
	return (*this->brain);
}
