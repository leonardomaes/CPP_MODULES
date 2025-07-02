/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:52:06 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/20 15:52:07 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
int main()
{
	try {
		Bureaucrat quim("quim", 70);
		ShrubberyCreationForm f1("manuel");		//Sign: 145  Exec: 137
		RobotomyRequestForm f2("miguel");		//Sign: 72   Exec: 45
		PresidentialPardonForm f3("quimzinho");	//Sign: 25   Exec: 5

		std::cout << std::endl;
		quim.signForm(f1);
		std::cout << std::endl;
		quim.signForm(f2);
		std::cout << std::endl;
		quim.signForm(f3);
		std::cout << std::endl;
		quim.executeForm(f1);
		std::cout << std::endl;
		quim.executeForm(f2);
		std::cout << std::endl;
		quim.executeForm(f3);
		std::cout << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	return (0);
}
