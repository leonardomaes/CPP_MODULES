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
		this->_deque.push_back(l.front());
		l.pop_front();
	}
}

template <typename Container>
bool PmergeMe::isSorted(Container& cont)
{
	typename Container::const_iterator it = cont.begin();

	int prev = *it;

	while (it != cont.end()) {
		it++;
	if (it == cont.end())
		break;
	if (*it < prev)
		return false;
	}
	return true;
}

double get_time_us()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000000L + tv.tv_usec;
}

void PmergeMe::Sort()
{

	double start, end;
	start = get_time_us();
	std::cout << "Before:  ";
	for (size_t i = 0; i < this->_vector.size(); ++i)
		std::cout << this->_vector[i] << " ";
	this->MergeSort(this->_vector);
	std::cout << std::endl << "After:   ";
	for (size_t i = 0; i < this->_vector.size(); ++i)
		std::cout << this->_vector[i] << " ";
	end = get_time_us();
	std::cout << std::endl << "Time to process a range of " << this->_vector.size()
			<< " elements with std::[vector] : " << (end - start) << " us " 
			<< std::fixed << std::setprecision(6) << "(" << (end - start) / 1000000.0 << "s)" << std::endl;


	start = get_time_us();
	this->MergeSort(this->_deque);
	end = get_time_us();
	std::cout << std::setprecision(0) << "Time to process a range of " << this->_vector.size()
			<< " elements with std::[deque]  : " << (end - start) << " us " 
			<< std::fixed << std::setprecision(6) << "(" << (end - start) / 1000000.0 << "s)" << std::endl;
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

/* 
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
 */

template <typename Container>
void PmergeMe::Merge(Container& left, Container& right, Container& v)
{
	typedef typename Container::iterator iterator;
	iterator l = left.begin();
	iterator r = right.begin();
	iterator it = v.begin();
	
	while (l != left.end() && r != right.end())
	{
		if (*l < *r)
			*it++ = *l++;
		else
			*it++ = *r++;
	}
	while (l != left.end())
		*it++ = *l++;
	while (r != right.end())
		*it++ = *r++;
}

 PmergeMe::MergeException::MergeException(const std::string& error) {
	_errorMsg = "Error: " + error;
}

PmergeMe::MergeException::~MergeException() throw() {}


const char *PmergeMe::MergeException::what() const throw() {
	return _errorMsg.c_str();
}
