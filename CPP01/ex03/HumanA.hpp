/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:50:59 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 17:51:00 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string input, Weapon &club);
	~HumanA();
	void	attack();
};
