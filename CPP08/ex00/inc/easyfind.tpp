/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 20:09:37 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/21 20:09:38 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T container, int num)
{
	typename T::iterator itr = std::find(container.begin(), container.end(), num);
	int index = std::distance(container.begin(), itr);
	if (itr != container.end())
	{
		std::cout << "Founded number at " << index+1 << "º position.(index:" << index << ")" << std::endl;
	}
	else
		throw ValueNotFound();
}

const char* ValueNotFound::what() const throw()
{
	return "Value not found in the container";
}

