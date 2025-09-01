/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:46:37 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/21 15:46:38 by lmaes            ###   ########.fr       */
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
#include <deque>
#include <list>



template <typename T>
void	easyfind(T intCont, int num);

class ValueNotFound : public std::exception {
	virtual const char* what() const throw();
};

#include "easyfind.tpp"
