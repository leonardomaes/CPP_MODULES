/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:50:41 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 17:50:42 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string input);
	~Weapon();
	const std::string &getType();
	void setType(std::string input);
};
