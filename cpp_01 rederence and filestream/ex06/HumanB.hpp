//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP


#include "Weapon.hpp"

class HumanB
{
	Weapon *_weapon;
	const char *_name;

public:
	HumanB(const char *name);

	void setWeapon(Weapon &weapon);

	void attack();
};


#endif //EX06_HUMANB_HPP
