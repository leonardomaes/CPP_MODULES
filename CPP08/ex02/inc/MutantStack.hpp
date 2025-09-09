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

template <typename T> class MutantStack : std::stack
{
private:
	
public:
	MutantStack();
	~MutantStack();
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

*/


#include "MutantStack.tpp"
