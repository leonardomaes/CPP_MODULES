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
	std::cout << "Constructor called (Brain)" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "New Idea";
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "Copy Constructor called (Brain)" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Assign called (Brain)" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor called (Brain)" << std::endl;
}

std::string	Brain::getIdea(int num) const
{
	if (num >= 0 && num < 100)
		return (this->ideas[num]);
	else
		return ("Invalid Index");
}

void	Brain::setIdea(std::string idea, int num)
{
	if (num >= 0 && num < 100)
		this->ideas[num] = idea;
	else
		std::cout << "Invalid Index" << std::endl;
}
