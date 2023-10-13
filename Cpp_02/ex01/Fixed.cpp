#include "Fixed.hpp"

Fixed::Fixed(): f_point(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return ;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->f_point);
}

void Fixed::setRawBits(int const raw) {
    this->f_point = raw;
    return;
}

Fixed   &Fixed::operator=(Fixed const &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed.f_point);
    return(*this);
}

/// ADD ///

Fixed::Fixed(const float value) {
    float           fixed_float;

    std::cout << "Float constructor called" << std::endl;
    fixed_float = value * (1 << Fixed::n_fractional_bits);
    this->f_point = roundf(fixed_float);
}

Fixed::Fixed(const int value) {
    int           fixed_int;

    std::cout << "int constructor called" << std::endl;
    fixed_int = value * (1 << Fixed::n_fractional_bits);
    this->setRawBits(fixed_int);
}


float   Fixed::toFloat(void) const {
    float   fl;

    fl = (float)this->f_point / (1 << Fixed::n_fractional_bits);
    return (fl);
}

int   Fixed::toInt(void) const {
    return (this->f_point >> Fixed::n_fractional_bits);
}

std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed) {
    new_out << fixed.toFloat();
    return (new_out);
}