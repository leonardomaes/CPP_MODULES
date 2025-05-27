/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:25:41 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/27 18:25:42 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string n);
	FragTrap(const FragTrap &obj);
	FragTrap &operator=(const FragTrap &f);
	~FragTrap();

	//Functions
	void highFivesGuys(void);
};

#endif
