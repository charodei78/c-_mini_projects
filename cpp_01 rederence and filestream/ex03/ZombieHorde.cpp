//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "ZombieHorde.hpp"

std::string ZombieHorde::_name[5]= {
			"Jake",
			"John",
			"Lemma",
			"Larry",
			"Garry"
	};

ZombieHorde::ZombieHorde(int numberOfZombie): _numberOfZombie(numberOfZombie)
{
	this->_zombieList = (Zombie*) operator new[] (sizeof(Zombie) * numberOfZombie);

	while (numberOfZombie--)
	{
		new (this->_zombieList + numberOfZombie) Zombie(_name[std::clock() % 5], "");
		this->_zombieList[numberOfZombie].announce();
	}
}

void ZombieHorde::destroy()
{
	while (this->_numberOfZombie--)
	{
		_zombieList[this->_numberOfZombie].~Zombie();
	}
}

ZombieHorde::~ZombieHorde()
{
	this->destroy();
}
