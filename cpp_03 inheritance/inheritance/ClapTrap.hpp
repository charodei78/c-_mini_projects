//
// Created by Holli Heimerdinger on 11/14/20.
//

#ifndef DAY_03_CLAPTRAP_HPP
#define DAY_03_CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <ostream>

class ClapTrap
{
protected:
	ClapTrap();
	int 		_hitPoints;

public:
	int getHitPoints() const;

protected:
	int 		_maxHitPoints;
	int 		_energyPoints;
	int 		_maxEnergyPoints;
	int 		_level;
	std::string _name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;


public:
	const std::string &getName() const;
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap & src);
	ClapTrap & operator=(ClapTrap & src);

};

std::string randString(const std::string *pull, unsigned size);


#endif //DAY_03_CLAPTRAP_HPP
