//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_POWERFIST_HPP
#define CPP_04_POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"


class PowerFist: public AWeapon
{
	void attack() const;

public:
	PowerFist();
};


#endif //CPP_04_POWERFIST_HPP
