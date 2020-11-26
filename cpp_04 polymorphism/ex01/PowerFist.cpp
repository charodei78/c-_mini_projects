//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "PowerFist.hpp"

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{

}

