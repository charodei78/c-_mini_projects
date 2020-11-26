//
// Created by Holli Heimerdinger on 11/22/20.
//

#include <iostream>
#include <string>
#include "iter.hpp"

int 	f(int n)
{
	return n;
}

int 	f1(std::string str)
{
	return str[0];
}
void 	f2(std::string str)
{
	std::cout << str << std::endl;
}

void 	f3(int n)
{
	std::cout << n << std::endl;
}




int main( void ) {
	int num[] = {1, 2, 3, 4};
	std::string str[]  = {"one", "two", "three", "four"};

	::iter(num, 4, f);
	::iter(num, 4, f3);
	::iter(str, 4, f2);
	::iter(str, 4, f1);

	return 0;
}