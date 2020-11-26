//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "ZombieEvent.hpp"

std::string ZombieEvent::_zombieType = "";
std::string ZombieEvent::_name[5]= {
			"Jake",
			"John",
			"Lemma",
			"Larry",
			"Garry"
	};

void ZombieEvent::setZombieType(std::string zombieType)
{
	_zombieType = zombieType;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, _zombieType);
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *zombie;

	zombie = new Zombie(_name[std::clock() % 5], _zombieType);
	zombie->announce();
	return zombie;
}
