/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:40:38 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/14 11:40:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main()
{

	{
		int arr[5] = {1, 2, 3, 4, 5};

		iter(arr, 5, printThis<int>);
		std::cout << std::endl;
		iter(arr, 5, addOne<int>);
		iter(arr, 5, printThis<int>);
		std::cout << std::endl << std::endl;
	}
	{
		const int arr[5] = {1, 2, 3, 4, 5};

		iter(arr, 5, printThis<int>);
		std::cout << std::endl;
		//iter(arr, 5, addOne<int>);
		iter(arr, 5, printThis<int>);
		std::cout << std::endl << std::endl;
	}
	{
		// char arr1[] = {'T', 'e', 's', 't', 'e', '\0'};
		char arr1[] = "Teste";

		iter(arr1, 7, printThis<char>);
		std::cout << std::endl;
		iter(arr1, 7, addOne<char>);
		iter(arr1, 7, printThis<char>);
		std::cout << std::endl;
	}

	return 0;
}
