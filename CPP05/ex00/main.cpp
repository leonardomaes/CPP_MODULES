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

int main()
{
	{
		try
		{
			Bureaucrat b("name", 149);
			std::cout << b << std::endl;
			b.decGrade();
			std::cout << b << std::endl;
			b.decGrade();
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << "\n\n";
		}
	}
	{
		try
		{
			Bureaucrat b("name", 1);
			std::cout << b << std::endl;
			b.incGrade();
			std::cout << b << std::endl;
			b.decGrade();
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << "\n\n";
		}
	}
	{
		try
		{
			Bureaucrat b("Test", -1);
			std::cout << b << std::endl;
			b.incGrade();
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << "\n\n";
		}
	}
	{
		try
		{
			Bureaucrat b("Test", 3);
			std::cout << b << std::endl;
			b.incGrade();
			std::cout << b << std::endl;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << "\n\n";
		}
	}
	return (0);
}

