/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:45:25 by lmaes             #+#    #+#             */
/*   Updated: 2025/05/07 19:45:26 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sed::sed(std::string s1, std::string s2, std::string s3)
{
	this->filename = s1;
	this->str1 = s2;
	this->str2 = s3;
}

sed::~sed()
{
}

void	sed::replaceStr()
{
	/* if (this->str1 == "" || )
	{
		/* code */
	} */
	std::ifstream inFile(this->filename.c_str());
	if (!inFile || !inFile.is_open())
	{
		std::cout << "Error to open file.\n";
		return ;
	}
	std::ofstream outFile((this->filename + ".replace").c_str());
	if (!outFile)
	{
		std::cout << "Error to open file.\n";
		return ;
	}
	std::string line;
	std::string outline;
	while (std::getline(inFile, line))
	{
		size_t i = 0;
		while ((i = line.find(this->str1, i)) != std::string::npos)
		{
			line.erase(i, this->str1.length());
			line.insert(i, this->str2);
			i += this->str2.length();
		}
		outFile << line << std::endl;
	}
	outFile.close();
	inFile.close();
}
