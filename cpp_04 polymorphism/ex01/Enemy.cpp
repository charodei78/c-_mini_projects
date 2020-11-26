//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type)
{

}

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

std::string Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHp() const
{
	return _hp;
}

Enemy::Enemy(const Enemy &src)
{
	*this = src;
}

Enemy &Enemy::operator=(const Enemy &src)
{
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_type = src._type;
	}
	return *this;
}

void Enemy::takeDamage(int points)
{
	if (points < 0)
		return;
	if (this->_hp > points)
		this->_hp -= points;
	else
		delete this;
}
