//
// Created by Holli Heimerdinger on 11/10/20.
//

#include <string>
#include "Weapon.hpp"


Weapon::Weapon(const char *string): _weaponType(const_cast<char *>(string))
{

}

void Weapon::setType(const char *type)
{
	this->_weaponType = const_cast<char *>(type);
}

char *Weapon::getWeaponType() const
{
	return _weaponType;
}
