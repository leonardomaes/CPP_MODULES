/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:46:37 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/21 15:46:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

int main()
{
	try
	{
		int * a = new int();
		Array<int> newArray(2);
		newArray[0] = 2;
		// newArray[1] = 4;
		std::cout << *a << std::endl;
		std::cout << newArray[0] << std::endl;
		std::cout << newArray[1] << std::endl;
		std::cout << newArray[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Array<std::string> newArray(6);
		std::string alpha = "abcdefghijklmnopqrstuvwxyz";
		for (size_t i = 0; i < 6; i++)
		{
			newArray[i] = alpha[i*2];
		}
		for (size_t i = 0; i < 7; i++)
		{
			std::cout << newArray[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
