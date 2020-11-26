#include <iostream>
#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	int 		i1 = -1;
	int 		i2 = 20;
	std::cout << "min( -1, 20 ) = " << ::min( i1, i2 ) << std::endl;
	std::cout << "max( -1, 20 ) = " << ::max( i1, i2 ) << std::endl;
	std::cout << "i1 = " << i1 << " : i2 = " << i2 << std::endl;
	::swap(i1, i2);
	std::cout << "swap( 0, 24 ) = " << std::endl;
	std::cout << "i1 = " << i1 << " : i2 = " << i2 << std::endl;
	return 0;
}