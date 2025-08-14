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

#include "../inc/Base.hpp"

int main()
{
	Base *p = Base::generate();
	std::cout << "Pointer: " << std::endl;
	Base::identify(p);
	std::cout << "Reference " << std::endl;
	Base::identify(*p);
	delete p;
}
