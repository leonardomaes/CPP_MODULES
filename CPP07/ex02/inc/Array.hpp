/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:48:40 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/21 15:48:41 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T> class Array
{
private:
	T *_elem;
	unsigned int _size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &obj);
	Array &operator=(const Array &obj);
	~Array();

	T &operator[](unsigned int n);
	T const &operator[](unsigned int n) const;
	unsigned int size();

	class OutOfBounds : public std::exception {
	public:
		const char* what() const throw();
	};
};

#include "../src/Array.tpp"
