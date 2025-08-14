/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:47:27 by lmaes             #+#    #+#             */
/*   Updated: 2025/08/14 10:47:28 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data init = {"Teste", 123, 321};
	std::cout << "-Data:" << std::endl
			<< init.text << std::endl
			<< init.x << std::endl
			<< init.y << std::endl;
	uintptr_t ptr = Serializer::serialize(&init);
	std::cout << "-Addr:" << std::endl << ptr << std::endl;
	Data *result = Serializer::deserialize(ptr);
	std::cout << "-Recovered:" << std::endl
			<< result->text << std::endl
			<< result->x << std::endl
			<< result->y << std::endl;
}
