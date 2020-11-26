//
// Created by Holli Heimerdinger on 11/11/20.
//

#include "FragTrap.hpp"

std::string const FragTrap::_attackPhrase[6] = {
		"Hocus-pocus!",
		"Ha-ha!",
		"AlacaZAM!",
		"Take that!",
		"You should see yourself!",
		"*bip-bup*"
};

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << _name << "(FragTrap): is created" << std::endl;
}

FragTrap::FragTrap()
{

}

FragTrap::~FragTrap()
{
	std::cout << _name << ": FragTrap *dead*" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &src)
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

FragTrap::FragTrap(FragTrap &src): ClapTrap(src)
{
	std::cout << src._name << ": new copy created!" << std::endl;
	*this = src;
	return;
}


void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static int prev_res = 0;

	if (_energyPoints >= 25)
	{
		srand(std::time(nullptr) + prev_res);
		prev_res = rand() % 2;
		_energyPoints -= 25;
		if (prev_res)
			this->meleeAttack(target);
		else
			this->rangedAttack(target);
		std::cout << randString(_attackPhrase, 6) << std::endl;
	}
	else
		std::cout << _name << ": no energy!" << std::endl;
}

