/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:24:11 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:24:12 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(); 								// Constructor
	WrongCat(const WrongCat &obj);				// Copy Constructor
	WrongCat &operator=(const WrongCat &obj);	// Assign Operator
	~WrongCat();								// Destructor

	// Functions
	void makeSound() const;
};

#endif

