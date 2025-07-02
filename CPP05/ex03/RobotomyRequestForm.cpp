/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:32:57 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/30 11:32:58 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("noName", "noTarget", 0, 0)
{
	std::cout << "Constructor called (Robotomy)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", target, 72, 45)
{
	std::cout << "Constructor called (Robotomy)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
	std::cout << "Copy constructor called (Robotomy)" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "Assign called (Robotomy)" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called (Robotomy)" << std::endl;
}

void RobotomyRequestForm::action() const
{
	srand(time(0));
	if ((rand() % 2) == 0)
	{
		std::cout << "CLANK—tink tink—VRRRRRRRRRRRRR!\n";
		std::cout << this->getTarget() << " has been robotomized successfully.\n";
	}
	else
		std::cout << this->getTarget() << " robotomy failed.\n";
}
