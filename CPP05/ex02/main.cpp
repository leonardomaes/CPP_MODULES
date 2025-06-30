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
#include "AForm.hpp"
int main()
{
	{
		try
		{
			Bureaucrat pepe("Pepe", 30);
			std::cout << pepe << std::endl;
			Form person("person", 50, 50);
			std::cout << person << std::endl;
			pepe.signForm(person);
			std::cout << person << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << std::endl;
			Bureaucrat manuel("Manuel", 60);
			std::cout << manuel << std::endl;
			Form paper("paper", 50, 50);
			std::cout << paper << std::endl;
			manuel.signForm(paper);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat a("Pepe", 20);
		Form b("Paper", 15, 15);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.signForm(b);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	return (0);
}
