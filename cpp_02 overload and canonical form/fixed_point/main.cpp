//
// Created by Holli Heimerdinger on 11/11/20.
//

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	if (d > b)
		std::cout << "d > b " << std::endl;
	else if (d == b)
		std::cout << "d == b " << std::endl;
	else
		std::cout << "d < b " << std::endl;

	if (a > b)
		std::cout << "a > b " << std::endl;
	else if (d == b)
		std::cout << "a == b " << std::endl;
	else
		std::cout << "a < b " << std::endl;

	if (a > c)
		std::cout << "a > c " << std::endl;
	else if (d == c)
		std::cout << "a ==  c " << std::endl;
	else
		std::cout << "a <  c " << std::endl;

	Fixed const p( Fixed( 5.05f ) + Fixed( 2 ) );
	std::cout << "5.05f + 2 is " << p << std::endl;

	Fixed const m( Fixed( 5.05f ) - Fixed( 2.4f ) );
	std::cout << "5.05f - 2.4f is " << m << std::endl;

	Fixed i;
	std::cout << i << std::endl;
	std::cout << ++i << std::endl;
	std::cout << i << std::endl;
	std::cout << i++ << std::endl;
	std::cout << i << std::endl;
	std::cout << --i << std::endl;
	std::cout << i << std::endl;


	Fixed const mu( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << mu << std::endl;
	std::cout << Fixed::max( i, mu ) << std::endl;
	return 0;
}
