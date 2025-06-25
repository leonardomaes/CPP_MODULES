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
	~Form();


	//Exceptions
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "";
		}
	};
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "";
		}
	};
	
	
};

#endif
