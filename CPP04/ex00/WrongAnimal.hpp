/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:53 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:23:54 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(); 										// Constructor
	WrongAnimal(const WrongAnimal &obj);				// Copy Constructor
	WrongAnimal &operator=(const WrongAnimal &obj);		// Assign Operator
	~WrongAnimal();										// Destructor

	// Functions
	void makeSound() const;
	std::string getType() const;
};

#endif
