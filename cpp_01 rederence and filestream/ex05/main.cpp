//
// Created by Holli Heimerdinger on 11/10/20.
//
#include "Human.hpp"
#include <iostream>

int 			main()
{
	Human 		bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}