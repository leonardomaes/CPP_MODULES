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
	std::string date;
	while (std::getline(inFile, line))
	{
		std::cout << "dbg::" << line << std::endl;
		date = ParseDate(line);
		//Print value
	}
	
	inFile.close();
}

std::string BitcoinExchange::ParseDate(std::string line)
{
	try
	{
		int year = 0;
		int month = 0;
		int date = 0;
		std::string dateBuffer(line, 0, 10);
		year = std::atoi(dateBuffer.substr(0, 4).c_str());
		month = std::atoi(dateBuffer.substr(5, 2).c_str());
		date = std::atoi(dateBuffer.substr(8, 2).c_str());
		if (date > 31 || date < 1 || month < 1 || month > 12)
			throw InvalidDate();
		// ...
		return dateBuffer;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << line << '\n';
	}
	return NULL;
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
