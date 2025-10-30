/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:36:46 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/29 19:36:47 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac == 1)
			throw PmergeMe::MergeException("Provide numbers to be sorted!");
		std::list<int> list;
		for (size_t i = 1; av[i]; i++)
		{
			std::string a = av[i];
			if ((a.empty()) || (a.find_first_not_of("0123456789") != std::string::npos))
				throw PmergeMe::MergeException("Invalid number founded!!");
			list.push_back(std::atoi(av[i]));
		}
		PmergeMe merge(list);
		merge.Sort();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
