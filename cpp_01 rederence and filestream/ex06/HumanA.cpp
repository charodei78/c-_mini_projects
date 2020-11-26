//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getWeaponType() << std::endl;
}

HumanA::HumanA(const char *name, Weapon &weapon): _weapon(weapon), _name(name)
{

}
