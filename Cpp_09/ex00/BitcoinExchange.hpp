#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
		std::string _input;

	public:
		BitcoinExchange(std::string data_base, std::string input_file);
		~BitcoinExchange();
		void parser(std::string const &data_base);
		void findDate();

		class DbErr : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Not in the database";
				}
		};

		class MonthErr : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Incorrect month";
				}
		};

		class DayErr : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Incorrect day";
				}
		};

		class Month30Err : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Month has 30 days";
				}
		};

		class YearErr : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Incorrect year";
				}
		};

		class ValueErr : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Too big or negative number";
				}
		};
};