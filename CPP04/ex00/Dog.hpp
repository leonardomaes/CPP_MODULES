/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:58 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:23:59 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();								// Constructor
	Dog(const Dog &obj);				// Copy Constructor
	Dog &operator=(const Dog &obj);		// Assign Operator
	~Dog();								// Destructor

	// Functions
	void makeSound() const;
};

#endif

