#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

bool isDouble(const std::string &digits)
{
    char *ptr;
    strtod(digits.c_str(), &ptr);
    if (!digits.empty() && (*ptr) == '\0')
        return true;
    else
        return false;
}

bool isFloat(const std::string &digits)
{
    return digits[digits.length() - 1] == 'f' && isDouble(digits.substr(0, digits.length() - 1));
}

bool isNumber(const std::string &digits)
{
    return isDouble(digits) || isFloat(digits);
}

bool isInt(const std::string &digits)
{
    double d = atof(digits.c_str());
    return (isNumber(digits) && !isnan(d));
}
bool isChar(const std::string &digits)
{
    double d = atof(digits.c_str());
    return (isInt(digits) && d >= 0 && d <= static_cast<unsigned char>(-1));
}

std::string toDigits(const std::string &input)
{
    std::stringstream ss;
    if (input.length() == 1 && !std::isdigit(static_cast<unsigned char>(input[0])))
        ss << static_cast<int>(input[0]);
    else
        ss << input;
    return ss.str();
}

std::string toChar(const std::string &digits)
{
    unsigned char c = static_cast<unsigned char>(atof(digits.c_str()));
    if (!isChar(digits))
        return "impossible";
    else
    {
        if (!std::isprint(c))
            return "Non displayable";
        else
            return '\'' + std::string(1, c) + '\'';
    }
}

std::string toInt(const std::string &digits)
{
    std::stringstream ss;
    double d = atof(digits.c_str());
    int i = static_cast<int>(d);
    ss << i;

    if (!isNumber(digits) || isnan(d) || isinf(d))
        return "impossible";
    else
    {
        if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
            return "overflow";
        else
            return ss.str();
    }
}

std::string toFloat(const std::string &digits)
{
    std::stringstream ss;
    double d = atof(digits.c_str());
    float f = static_cast<float>(d);
    ss.precision(1);
    ss << std::fixed << f;

    if (!isNumber(digits))
        return "impossible";
    else
    {
        if ((d > -std::numeric_limits<float>::max() && d < std::numeric_limits<float>::max()) || isnan(d))
            return ss.str() + 'f';
        else
        {
            if (d > 0)
                return "inf";
            else
                return "-inf";
        }
    }
}

std::string toDouble(const std::string &digits)
{
    std::stringstream ss;
    double d = atof(digits.c_str());
    ss.precision(1);
    ss << std::fixed << d;
    return !isNumber(digits) ? "impossible" : ss.str();
}

void ScalarConverter::convert(std::string input)
{
    std::string digits = toDigits(input);
    if (isFloat(digits))
        digits[digits.length() - 1] = 0;

    // Conversion functions
    std::cout << "char: " << toChar(digits) << std::endl;
    std::cout << "int: " << toInt(digits) << std::endl;
    std::cout << "float: " << toFloat(digits) << std::endl;
    std::cout << "double: " << toDouble(digits) << std::endl;
}
