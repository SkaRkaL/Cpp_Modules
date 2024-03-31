#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file, std::string input) : _input(input)
{
	parser(file);
}

BitcoinExchange::~BitcoinExchange() {}

static void checkDate(std::string date)
{
	if (date.length() != 10)
		std::cout << "error lenght" << std::endl;
	for (size_t i = 0; i < date.length(); i++)
	{
		if (date[i] == '-' || isdigit(date[i]))
			continue;
		else
			std::cout << "error digit" << std::endl;
	}
	std::string year = date.substr(0, date.find("-"));
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	int mm = stoi(month);
	int dd = stoi(day);
	if (mm < 1 || mm > 12)
		throw BitcoinExchange::MonthErr();
	else if (dd < 1 || dd > 31)
		throw BitcoinExchange::DayErr();
	else if ((mm == 2) && (dd > 29))
		throw BitcoinExchange::DayErr();
	else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && (dd > 30))
		throw BitcoinExchange::Month30Err();
	else if (year.length() < 4)
		throw BitcoinExchange::YearErr();
}

static float getNum(std::map<std::string, float> data, std::string date)
{
	std::map<std::string, float>::iterator it = data.lower_bound(date);

	if (it == data.begin() || it == data.end())
		throw BitcoinExchange::DbErr();
	else if (it->first == date)
		return it->second;
	else
	{
		--it;
		return it->second;
	}
}

static void checkValue(float n)
{
	if (n < 0 || n > 1000)
		throw BitcoinExchange::ValueErr();
}

void BitcoinExchange::parser(std::string const &dataFile)
{
	std::ifstream file(dataFile);
	if (!file.is_open())
	{
		std::cerr << "Error: Unable to open data file." << std::endl;
		exit(1);
	}
	std::string firstLine;
	std::string line;
	getline(file, firstLine);
	while (getline(file, line))
	{
		std::string date = line.substr(0, line.find(","));
		try
		{
			checkDate(date);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::string value = line.substr(line.find(",") + 1);
		_data[date] = stof(value);
	}
	file.close();
}

void BitcoinExchange::findDate()
{
	std::ifstream file(_input);
	if (!file.is_open())
	{
		std::cerr << "Error: Unable to open input file." << std::endl;
		exit(1);
	}
	std::string firstLine;
	std::string line;
	getline(file, firstLine);
	while (getline(file, line))
	{
		std::string date = line.substr(0, line.find(" | "));
		std::string value = line.substr(line.find(" | ") + 3);
		float n = stof(value);
		try
		{
			checkDate(date);
			checkValue(n);
			float result = getNum(_data, date);
			std::cout << date << " => " << n << " = " << n * result << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	file.close();
}
