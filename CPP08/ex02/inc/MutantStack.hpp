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

template <typename T> class MutantStack : public std::stack
{
public:
	MutantStack();
	~MutantStack();

	const std::stack<T>::container_type& getContainer() const;
	std::stack<T>::container_type& getContainer();

	//Iterators
	typedef std::deque<T>::const_iterator begin() const;
	typedef std::deque<T>::const_iterator end() const;
	
};


/*

Elem access:
empty() "Return true if the stack is empty"
size()  "Return number of elements in stack"
top()   "Return reference to the top element"

Modif:
push(const T& val)	"Add elem to the top"
pop()				"Remove the top element"
swap(stack& other)  "swap the content of 2 stacks"

Comparations:
"==", "!="
"<", "<=", ">", ">="


template <typename T, typename Container = std::deque<T> >
class stack {
protected:
    Container c;        // o container real que armazena os elementos
public:
    typedef typename Container::value_type value_type;
    typedef typename Container::size_type  size_type;

    stack() : c() {}
    explicit stack(const Container& cont) : c(cont) {}
    bool empty() const { return c.empty(); }
    size_type size() const { return c.size(); }
    value_type& top() { return c.back(); }
    const value_type& top() const { return c.back(); }
    void push(const value_type& v) { c.push_back(v); }
    void pop() { c.pop_back(); }
    void swap(stack& other) { c.swap(other.c); }
    // operadores de comparação normalmente delegam ao container c
};


*/


#include "../src/MutantStack.tpp"
