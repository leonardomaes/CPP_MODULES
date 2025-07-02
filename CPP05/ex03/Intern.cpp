/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:25:30 by lmaes             #+#    #+#             */
/*   Updated: 2025/07/02 17:25:31 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Constructor called (AForm)" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Copy constructor called (AForm)" << std::endl;
	*this = obj;
}

Intern &Intern::operator=(const Intern &obj)
{
	(void)obj;
	std::cout << "Assign called (AForm)" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor called (AForm)" << std::endl;
}

AForm *Intern::Presidential(std::string target) { return (new PresidentialPardonForm(target)); }
AForm *Intern::Shrubbery(std::string target) { return (new ShrubberyCreationForm(target)); }
AForm *Intern::Robotomy(std::string target) { return (new RobotomyRequestForm(target)); }

const char *Intern::noFormName::what() const throw() { return "There is no form with this name!!"; }

AForm *Intern::makeForm(std::string formName, std::string target)
{
	Intern::memFunc forms[] = {
		&Intern::Robotomy,
		&Intern::Shrubbery,
		&Intern::Presidential
	};
	const std::string levels[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (levels[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*forms[i])(target));
		}
	}
	throw noFormName();
	return (NULL);
}

