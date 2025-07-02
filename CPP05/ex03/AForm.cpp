/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:30:40 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/30 11:30:40 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Constructor called (AForm)" << std::endl;
}
AForm::AForm(std::string name, std::string target, int signGrade, int execGrade) : _name(name), _target(target), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Constructor called (AForm)" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}
AForm::AForm(const AForm &obj): _name(obj._name),  _isSigned(obj._isSigned), _signGrade(obj._signGrade), _execGrade(obj._execGrade)
{
	std::cout << "Copy constructor called (AForm)" << std::endl;
}
AForm& AForm::operator=(const AForm &obj)
{
	std::cout << "Assign called (AForm)" << std::endl;
	if (this != &obj)
	{
		this->_isSigned = obj._isSigned;
	}
	return *this;
}
AForm::~AForm()
{
	std::cout << "Destructor called (AForm)" << std::endl;
}

std::string AForm::getName() const { return (this->_name); }
std::string	AForm::getTarget() const { return (this->_target); }
int AForm::getSignGrade() const { return (this->_signGrade); }
int AForm::getExecGrade() const { return (this->_execGrade); }
bool AForm::getIsSigned() const { return (this->_isSigned); }

void AForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->getSignGrade())
		throw	GradeTooLowException();
	this->_isSigned = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	this->action();
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
	out << "AForm: " << obj.getName() << " Signed: " << (obj.getIsSigned() ? "Yes" : "No") << "\nSign grade: " << obj.getSignGrade() << "\nExec grade: " << obj.getExecGrade() << ".";
	return (out);
}
