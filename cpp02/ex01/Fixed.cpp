#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = value << this->_fractBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(value * (1 << this->_fractBits));
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
	std::cout << "getRawBits function called " << std::endl;
	return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedValue / (1 << this->_fractBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedValue >> this->_fractBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}