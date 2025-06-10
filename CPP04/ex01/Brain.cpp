/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:24:01 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:24:02 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Initializing Ideas...(Constructor)" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "New Idea";
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "Copying Ideas...(Copy Constructor)" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Copying Ideas...(Assign Operator)" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Emptying Ideas...(Destructor)" << std::endl;
}

void	Brain::printIdea(int num)
{
	std::cout << this->ideas[num] << std::endl;
}
