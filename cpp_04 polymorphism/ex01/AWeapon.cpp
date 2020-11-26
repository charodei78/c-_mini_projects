//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::AWeapon(AWeapon &src)
{
	*this = src;
}

AWeapon &AWeapon::operator=(AWeapon const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_apcost = src._apcost;
		this->_damage = src._damage;
	}
	return *this;
}

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}

AWeapon::AWeapon()
{
	this->_name = "";
	this->_apcost = 0;
	this->_damage = 0;
}

std::ostream & operator<<(std::ostream& os,AWeapon const& src)
{
	os << src.getName() << " damage: " << src.getDamage() << "; AP cost: " << src.getAPCost() << std::endl;
	return (os);
}
