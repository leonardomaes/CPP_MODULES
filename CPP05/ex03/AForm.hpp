/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:30:44 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/30 11:30:45 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class AForm
{
private:
	const std::string _name;
	const std::string _target;
	bool		_isSigned;
	const int	_signGrade;
	const int	_execGrade;
public:
	AForm();
	AForm(std::string name, std::string target, int signGrade, int execGrade);
	AForm(const AForm &obj);
	AForm &operator=(const AForm &obj);
	~AForm();

	// Getters
	std::string getName() const;
	std::string getTarget() const;
	int	getSignGrade() const;
	int getExecGrade() const;
	bool getIsSigned() const;

	//Exceptions
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Grade Too Low!!";
		}
	};
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Grade Too High!!";
		}
	};
	class FormNotSignedException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Form is not signed!!";
		}
	};
	// Functions
	virtual void	beSigned(const Bureaucrat &obj);
	virtual void	action() const = 0;
	void			execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);
