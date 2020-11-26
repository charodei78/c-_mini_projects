#include <iostream>
#include <list>

#include "easyfind.hpp"

int main()
{
	std::list<int>	list;

	list.push_back(1);
	list.push_back(7);
	list.push_back(2);
	list.push_back(7);
	list.push_back(5);


	if(easyfind(list, 4))
		std::cout << "found 4" << std::endl;
	else
		std::cout << "not found 4" << std::endl;

	if(easyfind(list, 1))
		std::cout << "found 1" << std::endl;
	else
		std::cout << "not found 1" << std::endl;

	if(easyfind(list, 7))
		std::cout << "found 7" << std::endl;
	else
		std::cout << "not found 7" << std::endl;

	if(easyfind(list, 14))
		std::cout << "found 4" << std::endl;
	else
		std::cout << "not found 4" << std::endl;
	return 0;
}
