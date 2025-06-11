/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:24:06 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:24:08 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	this->brain = new Brain(*obj.brain);
	std::cout << "Copy Constructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Assign called (Cat)" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete this->brain;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor called (Cat)" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow... Meow!" << std::endl;
}

Brain	*Cat::getBrain()
{
	return (this->brain);
}
