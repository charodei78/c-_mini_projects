//
// Created by Holli Heimerdinger on 11/11/20.
//

#include "NinjaTrap.hpp"

std::string const NinjaTrap::_actionsPull[] = {
		"tickles",
  		"scratching",
		"licks",
		"flips"
};

NinjaTrap::NinjaTrap(std::string name, int mode): ClapTrap(name)
{
	(void)mode;
	std::cout << _name << "(NinjaTrap): is created" << std::endl;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	std::cout << _name << "(NinjaTrap): is created" << std::endl;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap()
{

}

NinjaTrap::~NinjaTrap()
{
	std::cout << _name << ": NinjaTrap *dead*" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap &src)
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

NinjaTrap::NinjaTrap(NinjaTrap &src) : ClapTrap(src)
{
	std::cout << src._name << ": new NinjaTrap copy created!" << std::endl;
	*this = src;
	return;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &claptrap)
{
	std::cout << _name << " " << randString(_actionsPull, 4) << " " << claptrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &claptrap)
{
	std::cout << _name << " " << randString(_actionsPull, 4) << " " << claptrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &claptrap)
{
	std::cout << _name << " " << randString(_actionsPull, 4) << " " << claptrap.getName() << std::endl;
}
