//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_CHARACTER_HPP
#define CPP_04_CHARACTER_HPP

#include <sstream>
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

protected:
	std::string		_name;
	unsigned 		_ap;
	unsigned 		_maxAp;
	AWeapon 		*_weapon;
	Character();
public:
	unsigned int getAp() const;
	Character(std::string const & name);
	Character(Character const &src);
	Character & operator=(Character const &src);
	~Character();
	void recoverAP();
	const std::string &getName() const;
	AWeapon *getWeapon() const;
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
};

std::ostream & operator<<(std::ostream & os, Character & src);

#endif //CPP_04_CHARACTER_HPP
