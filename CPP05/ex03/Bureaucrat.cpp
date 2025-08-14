/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:53:03 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/20 15:53:04 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	std::cout << "Constructor called (Bureaucrat)" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
	std::cout << "Copy constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Assign called (Bureaucrat)" << std::endl;
	if (this != &obj)
	{
		this->_grade = obj._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called (Bureaucrat)" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High!!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low!!";
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incGrade()
{
	if (this->_grade > 1)
		this->_grade -= 1;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decGrade()
{
	if (this->_grade < 150)
		this->_grade += 1;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << this->getName() << " couldn't sign " << obj.getName() << " because " << e.what() << ".\n";
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << ".\n";
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}
