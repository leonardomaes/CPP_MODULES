/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:25:24 by lmaes             #+#    #+#             */
/*   Updated: 2025/07/02 17:25:25 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &obj);
	Intern &operator=(const Intern &obj);
	~Intern();

	class noFormName : public std::exception {
		const char* what() const throw();
	};

	AForm *makeForm(std::string formName, std::string target);
	AForm *Presidential(std::string target);
	AForm *Shrubbery(std::string target);
	AForm *Robotomy(std::string target);
	private:
		typedef AForm *(Intern::*memFunc)(std::string target);
};

