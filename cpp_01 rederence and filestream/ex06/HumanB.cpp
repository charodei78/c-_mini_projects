//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getWeaponType() << std::endl;
}

HumanB::HumanB(const char *name): _name(name)
{

}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
