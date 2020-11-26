//
// Created by Holli Heimerdinger on 11/11/20.
//

#ifndef DAY_02_FIXED_HPP
#define DAY_02_FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
	int _rawBits;
	static const int _fractionalBits = 8;

public:

public:

	Fixed();
	Fixed(float const floatValue);
	Fixed(int const intValue);
	Fixed(Fixed const & srcs);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);
	int toInt( void ) const;
	float toFloat( void ) const;
	int getRawBits() const;
	void setRawBits(int rawBits);

	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;
	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;

	Fixed operator--(int);
	Fixed& operator--();
	Fixed operator++(int);
	Fixed& operator++();

	static const Fixed &min(Fixed *p1, Fixed *p2);
	static const Fixed &min(const Fixed &p1, const Fixed &p2);
	static const Fixed &max(const Fixed &p1, const Fixed &p2);
	static const Fixed &max(Fixed *p1, Fixed *p2);

};


Fixed operator+(const Fixed &rhs1, const Fixed &rhs2);
Fixed operator-(const Fixed &rhs1, const Fixed &rhs2);
Fixed operator*(const Fixed &rhs1, const Fixed &rhs2);
Fixed operator/(const Fixed &rhs1, const Fixed &rhs2);



std::ostream & operator<<(std::ostream & os, Fixed const & fixed);

#endif //DAY_02_FIXED_HPP
