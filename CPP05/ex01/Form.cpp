/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:22:01 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/25 19:22:02 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Constructor called (Form)" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Constructor called (Form)" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &obj): _name(obj._name),  _isSigned(obj._isSigned), _signGrade(obj._signGrade), _execGrade(obj._execGrade)
{
	std::cout << "Copy constructor called (Form)" << std::endl;
}

Form& Form::operator=(const Form &obj)
{
	std::cout << "Assign called (Form)" << std::endl;
	if (this != &obj)
	{
		this->_isSigned = obj._isSigned;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor called (Form)" << std::endl;
}

std::string Form::getName() const { return (this->_name); }
int Form::getSignGrade() const { return (this->_signGrade); }
int Form::getExecGrade() const { return (this->_execGrade); }
bool Form::getIsSigned() const { return (this->_isSigned); }

const char *Form::GradeTooHighException::what() const throw() { return "Grade High Low"; }
const char *Form::GradeTooLowException::what() const throw() { return "Grade Too Low"; }

void Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->getSignGrade())
		throw	GradeTooLowException();
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	out << "Form: " << obj.getName() << " Signed: " << (obj.getIsSigned() ? "Yes" : "No") << "\nSign grade: " << obj.getSignGrade() << "\nExec grade: " << obj.getExecGrade() << ".";
	return (out);
}
