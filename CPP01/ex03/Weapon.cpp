/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:50:47 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 17:50:49 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string input)
{
	type = input;
}

Weapon::Weapon(std::string input)
{
	type = input;
}

Weapon::~Weapon()
{
}
