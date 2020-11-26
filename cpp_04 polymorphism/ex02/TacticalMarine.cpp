//
// Created by Holli Heimerdinger on 11/15/20.
//

#include <MacTypes.h>
#include "TacticalMarine.hpp"

ISpaceMarine *TacticalMarine::clone() const
{
	return new TacticalMarine();
}

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout <<  "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine &src)
{
	*this = src;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine &src)
{
	if (this != &src)
	{

	}
	return *this;
}
