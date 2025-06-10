/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:24:06 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:24:08 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Constructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "Copy Constructor called (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	WrongAnimal::operator=(obj);
	std::cout << "Assign called (WrongCat)" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called (WrongCat)" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow... Meow!" << std::endl;
}
