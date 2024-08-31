#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _fixedValue = value << _fractBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _fixedValue = roundf(value * (1 << _fractBits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixedValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)_fixedValue / (1 << _fractBits);
}

int Fixed::toInt(void) const
{
    return _fixedValue >> _fractBits;
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (_fixedValue > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (_fixedValue < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (_fixedValue >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (_fixedValue <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (_fixedValue == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (_fixedValue != fixed.getRawBits());
}

int Fixed::operator+(const Fixed &fixed) const
{
    return (_fixedValue + fixed.getRawBits());
}

int Fixed::operator-(const Fixed &fixed) const
{
    return (_fixedValue - fixed.getRawBits());
}

int Fixed::operator*(const Fixed &fixed) const
{
    return (_fixedValue * fixed.getRawBits() >> _fractBits);
}

int Fixed::operator/(const Fixed &fixed) const
{
    return (_fixedValue / fixed.getRawBits() << _fractBits);
}

Fixed &Fixed::operator++(void)
{
    _fixedValue++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    operator++();
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    _fixedValue--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    operator--();
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() <= b.toFloat())
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() <= b.toFloat())
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() >= b.toFloat())
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() >= b.toFloat())
        return (a);
    return (b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}