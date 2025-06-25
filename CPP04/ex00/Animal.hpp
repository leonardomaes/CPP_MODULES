/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:53 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:23:54 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

class Animal
{
protected:
	std::string type;
public:
	Animal(); 								// Constructor
	Animal(const Animal &obj);				// Copy Constructor
	Animal &operator=(const Animal &obj);	// Assign Operator
	virtual ~Animal();						// Destructor

	// Functions
	virtual void makeSound() const;
	std::string getType() const;
};

#endif
