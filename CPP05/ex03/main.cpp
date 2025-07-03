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

#include "Intern.hpp"

int main()
{
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	std::cout << std::endl;
	{
		AForm *pres;
		Intern joaozita;

		try {
			
			Bureaucrat joao("joao", 6);
			pres = joaozita.makeForm("presidential pardon", "manel");
			joao.signForm(*pres);
			joao.executeForm(*pres);

			delete (pres);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}

// 	Shrubbery		Sign: 145  Exec: 137
// 	Robotomy		Sign: 72   Exec: 45
//	Presidential	Sign: 25   Exec: 5
