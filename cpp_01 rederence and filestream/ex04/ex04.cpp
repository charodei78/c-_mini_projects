//
// Created by Holli Heimerdinger on 11/10/20.
//

#include <iostream>

int 	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *pString = &string;
	std::string &rString = string;

	std::cout << *pString << std::endl;
	std::cout << rString << std::endl;
}