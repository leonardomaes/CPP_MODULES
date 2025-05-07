/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:45:22 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 19:45:22 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <string.h>

class sed
{
private:
	std::string filename;
	std::string str1;
	std::string str2;
public:
	sed(std::string s1, std::string s2, std::string s3);
	~sed();
	void	replaceStr();
};
