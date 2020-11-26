//
// Created by Holli Heimerdinger on 11/11/20.
//

#include "ScavTrap.hpp"

std::string const ScavTrap::_chalengePull[] = {
		"EXPLOOOOOSIONS!	Kill 10 enemies with MIRV Grenades.",
		"Catch-a-Rocket!	Kill 5 enemies with direct rocket hits.",
		"Don't touch me!	Just don't touch.",
		"Hit-and-Fun		Kill 20 enemies by ramming them with a vehicle.",
		"Purple Reign		Loot or purchase purple items."
};

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << _name << "(ScavTrap): is created" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap()
{

}

ScavTrap::~ScavTrap()
{
	std::cout << _name << ": ScavTrap *dead*" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &src)
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

ScavTrap::ScavTrap(ScavTrap &src) : ClapTrap(src)
{
	std::cout << src._name << ": new copy created!" << std::endl;
	*this = src;
	return;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout << _name << " get new challenge for " << target
		<< ": " << randString(_chalengePull, 5) << std::endl;

	}
	else
		std::cout << _name << ": no energy!" << std::endl;
}

