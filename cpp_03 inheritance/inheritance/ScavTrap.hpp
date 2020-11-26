//
// Created by Holli Heimerdinger on 11/11/20.
//

#ifndef DAY_03_SCAVTRAP_HPP
#define DAY_03_SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class ScavTrap : public ClapTrap
{
	ScavTrap();

	static const std::string  _chalengePull[];
public:
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap & src);
	ScavTrap & operator=(ScavTrap & src);
	void challengeNewcomer(const std::string &target);

};


#endif //DAY_03_SCAVTRAP_HPP
