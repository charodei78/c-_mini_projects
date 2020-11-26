//
// Created by Holli Heimerdinger on 11/11/20.
//

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &srcs)
{
	*this = srcs;
	return ;
}

Fixed::Fixed(const int intValue)
{
	this->_rawBits = round(intValue * std::pow(2, _fractionalBits));
}

Fixed::Fixed(const float floatValue)
{
	this->_rawBits = round(floatValue * std::pow(2, _fractionalBits));
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return _rawBits;
}

void Fixed::setRawBits(int const rawBits)
{
	this->_rawBits = rawBits;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const
{
	return this->getRawBits() / std::pow(2, _fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->getRawBits() / std::pow(2, _fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}


bool Fixed::operator==(const Fixed &rhs) const
{
	return _rawBits == rhs._rawBits;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return !(rhs == *this);
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return _rawBits < rhs._rawBits;
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return !(*this < rhs);
}

Fixed &Fixed::operator++()
{
	_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed &Fixed::operator--()
{
	_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

const Fixed &Fixed::min(Fixed *p1, Fixed *p2)
{
	return (*p1 > *p2 ? *p2 : *p1);
}

const Fixed &Fixed::max(const Fixed &p1, const Fixed &p2)
{
	return (p1 < p2 ? p2 : p1);
}

const Fixed &Fixed::min(const Fixed &p1, const Fixed &p2)
{
	return (p1 > p2 ? p2 : p1);
}

const Fixed &Fixed::max(Fixed *p1, Fixed *p2)
{
	return (*p1 < *p2 ? *p2 : *p1);
}

Fixed operator+(const Fixed &rhs1, const Fixed &rhs2)
{
	return Fixed(rhs1.toFloat() + rhs2.toFloat());
}

Fixed operator-(const Fixed &rhs1, const Fixed &rhs2)
{
	return Fixed(rhs1.toFloat() - rhs2.toFloat());
}

Fixed operator*(const Fixed &rhs1, const Fixed &rhs2)
{
	return Fixed(rhs1.toFloat() * rhs2.toFloat());
}

Fixed operator/(const Fixed &rhs1, const Fixed &rhs2)
{
	return Fixed(rhs1.toFloat() / rhs2.toFloat());
}




