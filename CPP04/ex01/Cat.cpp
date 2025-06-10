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
	this->b = new Brain();
	std::cout << "Constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Copy Constructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	Animal::operator=(obj);
	std::cout << "Assign called (Cat)" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->b;
	std::cout << "Destructor called (Cat)" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow... Meow!" << std::endl;
}

void Cat::printIdea(int num)
{
	if (num > 0 && num < 100)
		this->b->printIdea(num);
	else
		std::cout << "Invalid num" << std::endl;
}
