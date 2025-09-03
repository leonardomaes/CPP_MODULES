/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:40:38 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/14 11:40:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdlib.h>
#include <iostream>
#include <cstring>

template <typename T, typename F>
void iter(T *addr, size_t n, F f)
{
	for (size_t i = 0; i < n; i++)
		f(addr[i]);
}

template <typename T>
void printThis(const T &n)
{
	std::cout << n;
}

template <typename T>
void addOne(T &n)
{
	n += 1;
}
