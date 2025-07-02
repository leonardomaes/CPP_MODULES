/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:32:44 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/30 11:32:45 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("noName", "noTarget", 0, 0)
{
	std::cout << "Constructor called (Shrubbery)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, 145, 137)
{
	std::cout << "Constructor called (Shrubbery)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
	std::cout << "Copy constructor called (Shrubbery)" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "Assign called (Shrubbery)" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called (Shrubbery)" << std::endl;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream outFile((this->getTarget() + "_shrubbery").c_str());
	if (!outFile)
		throw std::exception();
	outFile << "\
	     /\\\n\
	    /**\\\n\
	   /****\\   /\\\n\
	  /######\\ /**\\\n\
	 /########\\****\\\n\
	/##########\\##/**\\\n\
	      ||\n\
	      ||\n\
	      ||\n\
	--------------------------" << std::endl;
}
