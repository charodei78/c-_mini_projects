//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int points)
{
	Enemy::takeDamage(points - 3 < 0 ? 0 : points - 3);
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
	*this = src;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &src)
{
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_type = src._type;
	}
	return *this;
}
