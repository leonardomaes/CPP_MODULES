/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:13:29 by lmaes             #+#    #+#             */
/*   Updated: 2025/09/15 18:13:30 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////// OOF ///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)  : _map(obj._map)
{

}

BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////// PRIVATE /////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

void BitcoinExchange::ParseInput(char *av)
{
	if (!av)
		throw InvalidInput();
	if (strncmp(av + (strlen(av) - 4), ".txt", 4))
		throw InvalidExtension();
	std::ifstream inFile(av);
	if (!inFile || !inFile.is_open())
		throw CouldNotOpenFile();
	std::string line;
	std::getline(inFile, line);
	if (line.compare("date | value"))
		throw InvalidHeader();
	while (std::getline(inFile, line))
	{
		ParseInputLine(line);
		//Print value
	}
	
	inFile.close();
}

void BitcoinExchange::ParseInputLine(std::string line)
{
	try
	{
		for (size_t i = 0; line[i] && line[i] != ' '; i++)
		{
			if (!std::isdigit(line[i]) && line[i] != '-')
				throw InvalidDate();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << line << '\n';
	}
	

}

//////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////// PUBLIC /////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
BitcoinExchange::BitcoinExchange(char *av)
{
	//ParseCsv();
	ParseInput(av);
}
//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// EXCEPTIONS ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

const char* BitcoinExchange::InvalidInput::what() const throw()
{
	return "No input file specified!!";
}
const char* BitcoinExchange::InvalidExtension::what() const throw()
{
	return "File with Invalid Extension!!";
}
const char* BitcoinExchange::CouldNotOpenFile::what() const throw()
{
	return "Could Not Open File!!";
}
const char* BitcoinExchange::InvalidHeader::what() const throw()
{
	return "Invalid Header!!";
}
const char* BitcoinExchange::InvalidDate::what() const throw()
{
	return "Invalid Date => ";
}
