//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "Pony.hpp"

int 	main()
{
	std::cout << "ponyOnTheHeap() is called:" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheHeap() is end" << std::endl << std::endl;

	std::cout << "ponyOnTheStack() is called:" << std::endl;
	ponyOnTheStack();
	std::cout << "ponyOnTheStack() is end" << std::endl;
	return 0;
}