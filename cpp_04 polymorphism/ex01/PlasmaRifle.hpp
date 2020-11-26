//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_PLASMARIFLE_HPP
#define CPP_04_PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	void attack() const;

public:
	PlasmaRifle(PlasmaRifle const &src);
	PlasmaRifle & operator=(PlasmaRifle const &src);
	PlasmaRifle();
};


#endif //CPP_04_PLASMARIFLE_HPP
