/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:24:11 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:24:12 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(); 								// Constructor
	Cat(const Cat &obj);				// Copy Constructor
	Cat &operator=(const Cat &obj);		// Assign Operator
	~Cat();								// Destructor

	// Functions
	void makeSound() const;
};

#endif

