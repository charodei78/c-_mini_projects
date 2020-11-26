//
// Created by Holli Heimerdinger on 11/11/20.
//

#ifndef DAY_03_NINJATRAP_HPP
#define DAY_03_NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class NinjaTrap : virtual public ClapTrap
{
protected:
	NinjaTrap();
	static const std::string  _actionsPull[];

public:
	~NinjaTrap();
	NinjaTrap(std::string name, int mode);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap & src);
	NinjaTrap & operator=(NinjaTrap & src);
	void ninjaShoebox(NinjaTrap & claptrap);
	void ninjaShoebox(FragTrap & claptrap);
	void ninjaShoebox(ScavTrap & claptrap);

};


#endif //DAY_03_NINJATRAP_HPP
