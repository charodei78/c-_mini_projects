//
// Created by Holli Heimerdinger on 11/14/20.
//

#ifndef DAY_03_SUPERTRAP_HPP
#define DAY_03_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class SuperTrap : public NinjaTrap, public FragTrap
{

	public:

	SuperTrap();

	~SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap &src);
	SuperTrap & operator=(SuperTrap & src);

};


#endif //DAY_03_SUPERTRAP_HPP
