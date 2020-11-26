//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_ENEMY_HPP
#define CPP_04_ENEMY_HPP

#include <sstream>
#include <iostream>
#include <string>

class Enemy
{

protected:
	int 			_hp;
	std::string		_type;
	Enemy();
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string  getType() const;
	int getHp() const;
	Enemy(Enemy const &src);
	Enemy & operator=(Enemy const &src);
	virtual void takeDamage(int points);
};

#endif //CPP_04_ENEMY_HPP
