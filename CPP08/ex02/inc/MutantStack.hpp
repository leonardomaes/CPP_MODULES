/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:20:23 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/09 12:20:24 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <exception>

// Containers
#include <vector>
#include <stack>
#include <deque>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack& operator=(const MutantStack& obj);
	MutantStack(const MutantStack& obj);
	~MutantStack();

	typedef typename std::stack<T>::container_type container_type;
	typedef typename container_type::iterator iterator;
	typedef typename container_type::const_iterator const_iterator;

	iterator begin();
	iterator end();
	const_iterator begin() const;
	const_iterator end() const;

};


#include "../src/MutantStack.tpp"
