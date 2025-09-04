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

#include "../inc/Array.hpp"

template <class T>
Array<T>::Array() : _elem(NULL), _size(0)
{
	
}

template <class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_elem = new T[n];
}

template <class T>
Array<T>::Array(const Array &obj) : _size(obj._size)
{
	this->_elem = new T[this->_size];
	for (size_t i = 0; i < obj._size; i++)
		this->_elem[i] = obj._elem[i];
	*this = obj;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &obj)
{
	if (this != &obj)
	{
		delete[] this->_elem;
		this->_size = obj._size;
		this->_elem = new T[this->_size];
		for (size_t i = 0; i < obj._size; i++)
			this->_elem[i] = obj._elem[i];
	}
	return *this;
}

template <class T>
Array<T>::~Array()
{
	delete[] _elem;
}

template <class T>
T	&Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw OutOfBounds();
	return _elem[n];
}

template <class T>
T const	&Array<T>::operator[](unsigned int n) const
{
	if (n >= this->_size)
		throw OutOfBounds();
	return _elem[n];
}

template <class T>
unsigned int	Array<T>::size()
{
	return (this->_size);
}

template <class T>
const char* Array<T>::OutOfBounds::what() const throw()
{
	return "Out Of Bounds!!";
}
