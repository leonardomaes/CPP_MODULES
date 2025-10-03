/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:36:46 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/29 19:36:47 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& obj) : _vector(obj._vector)
{

}

PmergeMe PmergeMe::operator=(const PmergeMe& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return *this;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(std::list<int> l)
{
	while (!l.empty())
	{
		this->_vector.push_back(l.front());
		l.pop_front();
		// Verificar se ja esta sorted
	}
}

void PmergeMe::Sort()
{
	// std::cout << "Begin:" << std::endl;
	// for (size_t i = 0; i < _vector.size(); i++)
	// {
	// 	std::cout << _vector[i] << std::endl;
	// }
	this->MergeSort(this->_vector);
	// std::cout << "End:" << std::endl;
	// for (size_t i = 0; i < _vector.size(); i++)
	// {
	// 	std::cout << _vector[i] << std::endl;
	// }
	
}

template <typename Container>
void PmergeMe::MergeSort(Container& v)
{
	int size = v.size();
	if (size <= 1)
		return ;
	
	int middle = size / 2;
	Container left(v.begin(), v.begin() + middle);
	Container right(v.begin() + middle, v.end());
	MergeSort(left);
	MergeSort(right);
	Merge(left, right, v);
}

template <typename Container>
void PmergeMe::Merge(Container& left, Container& right, Container& v)
{
	int leftSize = left.size();
	int rightSize = right.size();
	int i = 0, l = 0, r = 0;

	while (l < leftSize && r < rightSize)
	{
		if (left[l] < right[r])
			v[i++] = left[l++];
		else
			v[i++] = right[r++];
	}
	while (l < leftSize)
		v[i++] = left[l++];
	while (r < rightSize)
		v[i++] = right[r++];
}

PmergeMe::MergeException::MergeException(const std::string& error) {
	_errorMsg = "Error: " + error;
}

PmergeMe::MergeException::~MergeException() throw() {}


const char *PmergeMe::MergeException::what() const throw() {
	return _errorMsg.c_str();
}
