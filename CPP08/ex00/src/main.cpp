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

#include "../inc/easyfind.hpp"

int main()
{
	srand(time(NULL));
	try
	{
		std::vector<int> container;
		for (int i = 0; i < 5; i++)
		{
			int num = rand() % 5;
			std::cout << "Added to container ->" << num << std::endl;
			container.push_back(num);
		}
		int numFound = rand() % 7;
		std::cout << "Num to be found: " << numFound << std::endl;
		easyfind(container, numFound);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}