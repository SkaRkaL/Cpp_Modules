#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &obj) { *this = obj; }

ScalarConverter::~ScalarConverter() {}

void To_Double(std::string const &input)
{
    std::istringstream issd(input);
    double d;
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '-' && input[i] != '.')
        {
            std::cout << "double: impossible" << std::endl;
            return;
        }
    }
    if (issd >> d)
    {
        std::cout << "double: " << d;
        if (d - static_cast<int>(d) == 0)
            std::cout << ".0" << std::endl;
        else
            std::cout << std::endl;
    }
    else
        std::cout << "double: impossible" << std::endl;
}

void To_Float(std::string &input)
{
    if (input.find('f') != std::string::npos)
	{
		input.erase(input.find('f'), 1);
	}
    if (input == "-inff" || input == "+inff" || input == "nan" || input == "-inf" || input == "+inf" || input == "inff")
    {
        std::cout << "float: " << input << "f" << std::endl;
        return;
    }
    std::istringstream issf(input);
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '-' && input[i] != '.')
        {
            std::cout << "float: impossible" << std::endl;
            return;
        }
    }

    float f;
    if (issf >> f)
    {
        std::cout << "float: " << f;
        if (f - static_cast<int>(f) == 0)
            std::cout << ".0" << "f" << std::endl;
        else
            std::cout << "f" << std::endl;
    }
    else
        std::cout << "float: impossible" << std::endl;
}

void To_Intiger(std::string const &input)
{
    int i = std::atoi(input.c_str());

    if (isdigit(input[0]) || (input[0] == '-' && isdigit(input[1])))
        std::cout << "int: " << i << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
}
void To_Character(std::string const &input)
{
    if (std::atoi(input.c_str()) < 255 && std::atoi(input.c_str()) > -256)
    {
        char c = std::atoi(input.c_str());
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::convert(std::string input)
{
    // Conversion functions
    To_Character(input);
    To_Intiger(input);
    To_Float(input);
    To_Double(input);
}
