//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_AWEAPON_HPP
#define CPP_04_AWEAPON_HPP


#include <sstream>
#include <iostream>
#include <string>

class AWeapon
{
protected:
	std::string _name;
	int 		_apcost;
	int 		_damage;
	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon& src);
	AWeapon& operator=(AWeapon const& src);
	virtual ~AWeapon();
	int getAPCost() const;
	int getDamage() const;
	std::string getName() const;
	virtual void attack() const = 0;
};

std::ostream & operator<<(std::ostream& os,AWeapon const& src);


#endif //CPP_04_AWEAPON_HPP
