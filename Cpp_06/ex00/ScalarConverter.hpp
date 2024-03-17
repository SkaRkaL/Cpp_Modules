#pragma once 

#include <iostream>
#include <sstream>
#include <limits>
#include <cstdlib>

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		ScalarConverter(ScalarConverter const &obj);
		~ScalarConverter();

		static void convert(std::string input);
};

