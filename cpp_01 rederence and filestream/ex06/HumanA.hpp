//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP


#include "Weapon.hpp"

class HumanA
{
	Weapon &_weapon;
	const char *_name;
public:
	HumanA(const char *name, Weapon &weapon);

	void attack();
};


#endif //EX06_HUMANA_HPP
