//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "PlasmaRifle.hpp"

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
	*this = src;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_apcost = src._apcost;
		this->_damage = src._damage;
	}
	return *this;
}
