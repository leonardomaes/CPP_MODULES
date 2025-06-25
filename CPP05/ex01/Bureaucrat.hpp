/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:52:58 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/20 15:52:59 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

class Bureaucrat
{
private:
	const	std::string _name;
	int		_grade;
public:
	// Orthodox Canonical Form
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();

	// Getters
	std::string	getName() const;
	int			getGrade() const;

	void		incGrade();
	void		decGrade();

	// Exceptions
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too low!!";
		}
	};
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too High!!";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif