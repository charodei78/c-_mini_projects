//
// Created by Holli Heimerdinger on 11/14/20.
//

#include "ClapTrap.hpp"

//
// Created by Holli Heimerdinger on 11/11/20.
//

#include "ClapTrap.hpp"

std::string randString(std::string const pull[], unsigned size)
{
	static int prev_res = 1;

	srand(std::time(nullptr) + prev_res);
	prev_res = rand() % size;
	return pull[prev_res];
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{

	std::cout << _name << "(ClapTrap): is created" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

ClapTrap::ClapTrap()
{

}

ClapTrap::~ClapTrap()
{
	std::cout << _name << ": ClapTrap *dead*" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &src)
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

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << src._name << ": new ClapTrap copy created!" << std::endl;
	*this = src;
	return;
}

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout
		<< _name << ": attacks "
		<< target << " at range, causing " << this->_rangedAttackDamage
		<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int 	amount_res;

	amount_res = amount;
	amount_res -= _armorDamageReduction;
	if (amount_res < 0)
		amount_res = 0;
	amount = amount_res;
	_hitPoints -= (int)amount;
	std::cout
		<< this->_name << ": take damage , causing "
		<< amount << " points of damage!" << std::endl;
	if (_hitPoints <= 0)
		this->~ClapTrap();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + (int)amount > _maxHitPoints)
		amount -= (_hitPoints + amount) % _maxHitPoints;
	_hitPoints += (int)amount;
	std::cout
		<< _name << ": repair "
		<< amount << " HP" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout
		<< _name << ": attacks "
		<< target << " at melee, causing " << _meleeAttackDamage
		<< " points of damage!" << std::endl;
}


const std::string &ClapTrap::getName() const
{
	return _name;
}

int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}