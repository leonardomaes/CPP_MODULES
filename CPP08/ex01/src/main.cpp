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
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		return 0;
	}
	{
		Span span(11);

		int	numbers[11] = {2147483647, 0, 5, -5, 4 , 7, 9, 8, -2147483648, -3, 12321321};
		for (int i = 0; i < 11; i++)
		{
			span.addNumber(numbers[i]);
		}
		std::cout << "longest span is: " << span.longestSpan() << std::endl;
		std::cout << "min span is: " << span.shortestSpan() << std::endl;

		Span span2(11);

		span2.addNumber(numbers, numbers + 11);

		std::cout << "longest span is: " << span2.longestSpan() << std::endl;
		std::cout << "min span is: " << span2.shortestSpan() << std::endl;

		Span span3(100000);

		for (int i = 0; i < 100000; i++)
		{
			span3.addNumber(rand());
		}

		std::cout << "longest span is: " << span3.longestSpan() << std::endl;
		std::cout << "min span is: " << span3.shortestSpan() << std::endl;
	}
	/* {
		Span span(11);

		int	numbers[11] = {2147483647, 0, 5, -5, 4 , 7, 9, 8, -2147483648, -3, 12321321};
		for (int i = 0; i < 11; i++)
		{
			span.addNumber(numbers[i]);
		}
		std::cout << "longest span is: " << span.longestSpan() << std::endl;
		std::cout << "min span is: " << span.shortestSpan() << std::endl;

		Span span2(11);

		span2.addNumber(numbers, numbers + 11);

		std::cout << "longest span is: " << span2.longestSpan() << std::endl;
		std::cout << "min span is: " << span2.shortestSpan() << std::endl;

		Span span3(100000);

		for (int i = 0; i < 100000; i++)
		{
			span3.addNumber(rand());
		}

		std::cout << "longest span is: " << span3.longestSpan() << std::endl;
		std::cout << "min span is: " << span3.shortestSpan() << std::endl;
	} */
}
