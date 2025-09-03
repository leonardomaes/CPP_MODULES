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
		std::cout << std::endl;
	}

	return 0;
}
