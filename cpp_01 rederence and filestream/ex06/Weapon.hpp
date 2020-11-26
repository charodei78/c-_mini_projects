//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <iostream>

class Weapon
{
	char *_weaponType;
public:
	char *getWeaponType() const;

public:
	Weapon(char const *string);
	void setType(char const *string);


};


#endif //EX06_WEAPON_HPP
