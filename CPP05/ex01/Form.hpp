/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:21:57 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/25 19:21:58 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool		_isSigned;
	const int	_signGrade;
	const int	_execGrade;
public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &obj);
	Form &operator=(const Form &obj);
	~Form();

	// Getters
	std::string getName() const;
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
	// Functions
	void	beSigned(const Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
