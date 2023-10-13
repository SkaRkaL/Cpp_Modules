#include "Fixed.hpp"


Fixed::Fixed(): f_point(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const &fixed) {*this = fixed;}

int Fixed::getRawBits(void) const {return(this->f_point);}

void Fixed::setRawBits(int const raw) {this->f_point = raw;}

Fixed   &Fixed::operator=(Fixed const &fixed) {
    this->setRawBits(fixed.f_point);
    return(*this);
}

Fixed::Fixed(const float value) {
    float   fixed_float;

    fixed_float = value * (1 << Fixed::n_fractional_bits);
    this->f_point = roundf(fixed_float);
}

Fixed::Fixed(const int value) {
    int     fixed_int;

    fixed_int = value * (1 << Fixed::n_fractional_bits);
    this->setRawBits(fixed_int);
}


float   Fixed::toFloat(void) const {
    float   fl;

    fl = (float)this->f_point / (1 << Fixed::n_fractional_bits);
    return (fl);
}

int   Fixed::toInt(void) const {return (this->f_point >> Fixed::n_fractional_bits);}

std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed) {
    new_out << fixed.toFloat();
    return (new_out);
}

/// ADD ///

bool   Fixed::operator<(Fixed const &fixed) const {
    return (this->f_point < fixed.f_point);
}

bool   Fixed::operator>(Fixed const &fixed) const {
    return (this->f_point > fixed.f_point);
}

bool   Fixed::operator<=(Fixed const &fixed) const {
    return ((this->f_point < fixed.f_point) || (this->f_point == fixed.f_point));
}

bool   Fixed::operator>=(Fixed const &fixed) const {
    return ((this->f_point > fixed.f_point) || (this->f_point == fixed.f_point));
}

bool   Fixed::operator==(Fixed const &fixed) const {
    return (this->f_point == fixed.f_point);
}

bool   Fixed::operator!=(Fixed const &fixed) const {
    return (this->f_point != fixed.f_point);
}

Fixed   Fixed::operator+(Fixed const &fixed) {
    return (Fixed((this->f_point + fixed.f_point) / (float)(1 << n_fractional_bits)));
}

Fixed   Fixed::operator-(Fixed const &fixed) {
    return (Fixed((this->f_point - fixed.f_point) / (float)(1 << n_fractional_bits)));
}

Fixed   Fixed::operator/(Fixed const &fixed) {
    return (Fixed((this->f_point / (float)(1 << n_fractional_bits)) / (fixed.f_point/ (float)(1 << n_fractional_bits))));
}

Fixed   Fixed::operator*(Fixed const &fixed) {
    return (Fixed((this->f_point / (float)(1 << n_fractional_bits)) * (fixed.f_point/ (float)(1 << n_fractional_bits))));
}

Fixed   Fixed::operator++(void) {
    this->f_point++;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed   tmp = *this;

    this->f_point++;
    return (tmp);
}

Fixed   Fixed::operator--(void) {
    this->f_point--;
    return (*this);
}

Fixed   Fixed::operator--(int) {
    Fixed   tmp = *this;

    this->f_point--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1 < fixed2)
        return(fixed1);
    return (fixed2);
}

Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1 < fixed2)
        return((Fixed&) fixed1);
    return ((Fixed&) fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1 > fixed2)
        return(fixed1);
    return (fixed2);
}

Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1 > fixed2)
        return((Fixed&)fixed1);
    return ((Fixed&) fixed2);
}

