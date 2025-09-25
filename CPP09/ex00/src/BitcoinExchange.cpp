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

void BitcoinExchange::ParseCsv(void)
{
	std::ifstream db("data.csv");
	if (!db || !db.is_open())
		throw CouldNotOpenDB();
	std::string line;
	std::getline(db, line);
	if (line.compare("date,exchange_rate"))
		throw InvalidHeader();
	std::string date;
	float num;
	while (std::getline(db, line))
	{
		date = ParseDate(line, ',');
		num = ParseNum(line, 1);
		this->_map.insert(std::make_pair(date, num));
	}
}

void BitcoinExchange::ParseInput(char *av)
{
	if (!av)
		throw InvalidInput();
	std::ifstream inFile(av);
	if (!inFile || !inFile.is_open())
		throw CouldNotOpenFile();
	std::string line;
	std::getline(inFile, line);
	if (line.compare("date | value"))
		throw InvalidHeader();
	std::string date;
	float num;
	while (std::getline(inFile, line))
	{
		try
		{
			date = ParseDate(line, '|');
			num = ParseNum(line, 2);
			PrintValue(date, num);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << " => " << line << '\n';
		}
	}
	
	inFile.close();
}

void BitcoinExchange::PrintValue(std::string date, float num)
{
	if (this->_map[date.erase(date.size() - 1)])
		std::cout  << date << " => " << num << " = " << this->_map[date] * num << std::endl;
	else
	{
		std::map<std::string, float>::const_iterator i = _map.upper_bound(date);
		--i;
		--i;
		std::cout << date << " => " << num << " = " << num * i->second << std::endl;
	}
}

std::string BitcoinExchange::ParseDate(std::string line, char toFind)
{
	size_t inputPipe = line.find(toFind);
		if (inputPipe == std::string::npos)
			throw InvalidDate();
	std::string dateBuffer(line, 0, inputPipe);
	tm tm;
	if (!strptime(dateBuffer.c_str(), "%Y-%m-%d", &tm))
		throw InvalidDate();
	return dateBuffer;
}
float BitcoinExchange::ParseNum(std::string line, int flag)
{
	if (flag == 1)
	{
		std::string numBuffer = line.substr(line.find(',') + 1);
		bool dotFund = false;
		for (size_t i = 0; numBuffer[i]; i++)
		{
			if (!std::isdigit(numBuffer[i]))
			{
				if (numBuffer[i] == '.' && !dotFund)
					dotFund = true;
				else
					throw InvalidDB();
			}
		}
		char *end;
		float num = std::strtof(numBuffer.c_str(), &end);
		if (*end != '\0' || num < 0)
			throw InvalidDB();
		return num;
	}
	else if (flag == 2)
	{
		std::string numBuffer = line.substr(line.find('|') + 2);
		bool dotFund = false;
		for (size_t i = 0; numBuffer[i]; i++)
		{
			if (!std::isdigit(numBuffer[i]))
			{
				if (numBuffer[i] == '.' && !dotFund)
					dotFund = true;
				else
					throw InvalidValue();
			}
		}
		char *end;
		float num = std::strtof(numBuffer.c_str(), &end);
		if (*end != '\0')
			throw InvalidDB();
		else if (num < 0 || num > 1000)
			throw InvalidValue();
		
		return num;
	}
	
	throw InvalidDB();
}

//////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////// PUBLIC /////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
BitcoinExchange::BitcoinExchange(char *av)
{
	ParseCsv();
	ParseInput(av);
}
//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// EXCEPTIONS ///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

const char* BitcoinExchange::InvalidInput::what() const throw() { return "No input file specified!!"; }
const char* BitcoinExchange::InvalidExtension::what() const throw() { return "File with Invalid Extension!!"; }
const char* BitcoinExchange::CouldNotOpenFile::what() const throw() { return "Could Not Open File!!"; }
const char* BitcoinExchange::CouldNotOpenDB::what() const throw() { return "Could Not Open Database!!"; }
const char* BitcoinExchange::InvalidHeader::what() const throw() { return "Invalid Header!!"; }
const char* BitcoinExchange::InvalidDate::what() const throw() { return "Invalid Input Date"; }
const char* BitcoinExchange::InvalidValue::what() const throw() { return "Invalid Input Value"; }
const char* BitcoinExchange::InvalidDB::what() const throw() { return "Invalid Database"; }
