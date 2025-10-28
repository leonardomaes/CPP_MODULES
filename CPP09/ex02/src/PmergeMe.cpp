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

double get_time_us()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000000L + tv.tv_usec;
}


template <typename Container>
void PmergeMe::BinaryInsert(Container &main, typename Container::value_type value)
{
	typename Container::iterator pos = std::lower_bound(main.begin(), main.end(), value);
	main.insert(pos, value);
}

std::vector<size_t> PmergeMe::GenerateJacobsthalOrder(size_t n)
{
	std::vector<size_t> jacob;
	std::vector<size_t> order;

	jacob.push_back(0);
	jacob.push_back(1);
	while (jacob.back() < n)
		jacob.push_back(jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2]);
	size_t prev = 1;
	for (size_t i = 2; jacob[i] <= n; ++i)
	{
		for (size_t j = jacob[i]; j > prev; --j)
			order.push_back(j - 1);
		prev = jacob[i];
	}
	while (prev < n)
		order.push_back(prev++);
	return order;
}

template <typename Container>
void PmergeMe::MergeInsertionSort(Container& v)
{
	int size = v.size();
	if (size <= 1)
		return ;
	for (int i = 0; i+1 < size; i+=2)
	{
		if (v[i] > v[i+1])
			std::swap(v[i], v[i+1]);
	}
	std::vector<typename Container::value_type> a; // receive larger numbers
	std::vector<typename Container::value_type> b; // receive smaller numbers

	for (int i = 0; i + 1 < size; i += 2)
	{
		b.push_back(v[i]);
		a.push_back(v[i + 1]);
	}
	if (size % 2 != 0)
		a.push_back(v[size - 1]);
	MergeInsertionSort(a);
	std::vector<size_t> order = GenerateJacobsthalOrder(b.size());
	for (size_t i = 0; i < order.size(); ++i)
	{
		if (order[i] < b.size())
			BinaryInsert(a, b[order[i]]);
	}
	v.assign(a.begin(), a.end());
}


// template <typename Container>
// void PmergeMe::Merge(Container& left, Container& right, Container& v)
// {
// 	int leftSize = left.size();
// 	int rightSize = right.size();
// 	int i = 0, l = 0, r = 0;

// 	while (l < leftSize && r < rightSize)
// 	{
// 		if (left[l] < right[r])
// 			v[i++] = left[l++];
// 		else
// 			v[i++] = right[r++];
// 	}
// 	while (l < leftSize)
// 		v[i++] = left[l++];
// 	while (r < rightSize)
// 		v[i++] = right[r++];
// }

// template <typename Container>
// void PmergeMe::Merge(Container& left, Container& right, Container& v)
// {
// 	typedef typename Container::iterator iterator;
// 	iterator l = left.begin();
// 	iterator r = right.begin();
// 	iterator it = v.begin();
	
// 	while (l != left.end() && r != right.end())
// 	{
// 		if (*l < *r)
// 			*it++ = *l++;
// 		else
// 			*it++ = *r++;
// 	}
// 	while (l != left.end())
// 		*it++ = *l++;
// 	while (r != right.end())
// 		*it++ = *r++;
// }

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

void PmergeMe::Sort()
{

	double start, end;
	std::cout << "Before:  ";
	for (size_t i = 0; i < this->_vector.size(); ++i)
		std::cout << this->_vector[i] << " ";
	start = get_time_us();
	this->MergeInsertionSort(this->_vector);
	end = get_time_us();
	std::cout << std::endl << "After:   ";
	for (size_t i = 0; i < this->_vector.size(); ++i)
		std::cout << this->_vector[i] << " ";
	std::cout << std::endl << "Time to process a range of " << this->_vector.size()
			<< " elements with std::[vector] : " << (end - start) << " us " 
			<< std::fixed << std::setprecision(6) << "(" << (end - start) / 1000000.0 << "s)" << std::endl;


	start = get_time_us();
	this->MergeInsertionSort(this->_deque);
	end = get_time_us();
	std::cout << std::setprecision(0) << "Time to process a range of " << this->_vector.size()
			<< " elements with std::[deque]  : " << (end - start) << " us " 
			<< std::fixed << std::setprecision(6) << "(" << (end - start) / 1000000.0 << "s)" << std::endl;
}



 PmergeMe::MergeException::MergeException(const std::string& error) {
	_errorMsg = "Error: " + error;
}

PmergeMe::MergeException::~MergeException() throw() {}


const char *PmergeMe::MergeException::what() const throw() {
	return _errorMsg.c_str();
}
