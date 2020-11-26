//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Character.hpp"

Character::Character(const std::string &name): _name(name), _ap(40), _maxAp(_ap), _weapon(0)
{

}

const std::string &Character::getName() const
{
	return _name;
}

AWeapon *Character::getWeapon() const
{
	return _weapon;
}

Character::Character(): _name("")
{

}

Character::Character(const Character &src)
{
	*this = src;
}

Character &Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_weapon = src._weapon;
	}
	return *this;
}

Character::~Character()
{

}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > this->_maxAp)
		this->_ap = this->_maxAp;
}

unsigned int Character::getAp() const
{
	return _ap;
}

void Character::attack(Enemy *enemy)
{
	if (!this->_weapon)
		return;
	else if (this->_ap < static_cast<unsigned>(this->_weapon->getAPCost()))
	{
		std::cout << "No AP!" << std::endl;
	}
	else if (!enemy)
		return;
	else
	{
		this->_ap -= this->_weapon->getAPCost();
		std::cout
		<< this->_name << " attacks "
		<< enemy->getType() << " with a "
		<< this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
	}
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}


std::ostream & operator<<(std::ostream & os, Character & src)
{
	if (src.getWeapon())
		std::cout << src.getName() << " has "
		<< src.getAp() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		std::cout << src.getName() << " has " << src.getAp() << " AP and is unarmed" << std::endl;

	return os;
}
