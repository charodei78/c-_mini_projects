//
// Created by Holli Heimerdinger on 11/11/20.
//

#ifndef DAY_03_FRAGTRAP_HPP
#define DAY_03_FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>

class FragTrap : virtual public ClapTrap
{

protected:
	FragTrap();
	static const std::string _attackPhrase[];

public:

	~FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &src);
	FragTrap & operator=(FragTrap & src);
	void vaulthunter_dot_exe(const std::string &target);

};


#endif //DAY_03_FRAGTRAP_HPP
