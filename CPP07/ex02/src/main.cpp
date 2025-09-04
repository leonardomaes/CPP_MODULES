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
#include <cstdlib>
#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
	{
		try
		{
			Array<int> newArray(2);
			std::cout << "Size: " << newArray.size() << std::endl;
			newArray[0] = 2;
			newArray[1] = 4;
			std::cout << newArray[0] << std::endl;	// Class
			std::cout << newArray[1] << std::endl;	// Val = 4
			std::cout << newArray[3] << std::endl;	// Out of Bounds
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
		std::cout << std::endl;
	}
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}

    return 0;
}
