/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:52:06 by lmaes             #+#    #+#             */
/*   Updated: 2025/07/23 15:52:07 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Constructor called (Serializer)" << std::endl;
}

Serializer::Serializer(const Serializer &obj)
{
	(void)obj;
	std::cout << "Copy Constructor called (Serializer)" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &obj)
{
	(void)obj;
	std::cout << "Assign Operatort called (Serializer)" << std::endl;
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "Destructor called (Serializer)" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
