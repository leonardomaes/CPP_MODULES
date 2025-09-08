/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 20:52:37 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/26 20:52:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printSelf();
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span span(11);

		int	numbers[11] = {2147483647, 0, 5, -5, 4 , 7, 9, 8, -2147483648, -3, 12321321};
		for (int i = 0; i < 11; i++)
		{
			span.addNumber(numbers[i]);
		}
		span.printSelf();
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span : " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span span(11);
		int	numbers[11] = {2147483647, 0, 5, -5, 4 , 7, 9, 8, -2147483648, -3, 12321321};

		span.addNumber(numbers);
		span.printSelf();
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span : " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span span(11);
		int	numbers[11] = {2147483647, 0, 5, -5, 4 , 7, 9, 8, -2147483648, -3, 12321321};

		span.addNumber(numbers, 4);
		span.printSelf();
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span : " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try // OK
	{
		Span span(100000);
		std::srand(time(NULL));
		for (int i = 0; i < 100000; i++)
		{
			span.addNumber(rand());
		}
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span : " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}
