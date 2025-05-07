/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:51:09 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 17:51:09 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string input1);
	~HumanB();
	void	setWeapon(Weapon &input);
	void	attack();
};

