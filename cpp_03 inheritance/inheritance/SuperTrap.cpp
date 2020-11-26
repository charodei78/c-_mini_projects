//
// Created by Holli Heimerdinger on 11/14/20.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), NinjaTrap(name, 1), FragTrap(name)
{
	std::cout << _name << "(SuperTrap): is created" << std::endl;
}

SuperTrap::SuperTrap()
{

}

SuperTrap::~SuperTrap()
{
	std::cout << _name << ": SuperTrap *dead*" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap &src)
{
	if (this != &src)
	{
		this->_hitPoints = src._hitPoints;
		this->_maxHitPoints = src._maxHitPoints;
		this->_energyPoints = src._energyPoints;
		this->_maxEnergyPoints = src._maxEnergyPoints;
		this->_level = src._level;
		this->_name = src._name;
		this->_meleeAttackDamage = src._meleeAttackDamage;
		this->_rangedAttackDamage = src._rangedAttackDamage;
		this->_armorDamageReduction = src._armorDamageReduction;
	}
	return *this;
}

SuperTrap::SuperTrap(SuperTrap &src): ClapTrap(src), NinjaTrap(src) , FragTrap(src)
{
	std::cout << src._name << ": new copy created!" << std::endl;
	*this = src;
	return;
}

