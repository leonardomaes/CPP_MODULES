/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:20:23 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/09 12:20:24 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() { }

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj)
{
	if (this != &obj)
	{
		std::stack<T>::operator=(obj);
	}
	return *this;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& obj) : std::stack<T>(obj) { }

template <typename T>
MutantStack<T>::~MutantStack() { }

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return this->c.end();
}
