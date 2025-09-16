/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:22:19 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/09 12:22:20 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int main()
{
	std::cout << BCK_GREEN BLACK << "SUBJECT TESTS:" << RESET << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << BCK_GREEN BLACK << "SUBJECT TESTS(w/ list):" << RESET << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << BCK_GREEN BLACK << "MY TESTS:" << RESET << std::endl;
	{
		MutantStack<int>	mstack;
		std::list<int>		list;
		std::vector<int>	v;

		mstack.push(10);
		mstack.push(20);
		mstack.push(30);
		mstack.push(40);
		mstack.push(50);

		list.push_back(10);
		list.push_back(20);
		list.push_back(30);
		list.push_back(40);
		list.push_back(50);

		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);
		v.push_back(50);

		mstack.pop();
		list.pop_back();
		v.pop_back();

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::list<int>::iterator l_it = list.begin();
		std::vector<int>::iterator v_it = v.begin();

		std::cout << std::left << std::setw(8) << "MStack" << std::setw(8) << "list" << std::setw(8) << "vector" << std::endl;
		while (it != ite)
		{
			std::cout << std::left << std::setw(8) << *it;
			std::cout << std::left << std::setw(8) << *l_it;
			std::cout << std::left << std::setw(8) << *v_it;
			std::cout << std::endl;
			++it;
			++l_it;
			++v_it;
		}
	}
	return 0;
}
