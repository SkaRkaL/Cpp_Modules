#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 f_point;
        static int const    n_fractional_bits = 8;
    public:
        Fixed();
        Fixed(Fixed const &fixed);
        Fixed &operator=(Fixed const &Fixed); 
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
//				ADD					\\|
        Fixed(const int value);
        Fixed(const float value);
        float   toFloat(void) const;
        int     toInt(void) const;
        
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif