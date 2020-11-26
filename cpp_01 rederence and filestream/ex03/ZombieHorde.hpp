//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef EX04_ZOMBIEHORDE_HPP
#define EX04_ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	Zombie *_zombieList;
	int 	_numberOfZombie;

public:
	ZombieHorde(int numberOfZombie);

	void destroy();

	virtual ~ZombieHorde();

private:
	static std::string _name[5];
	Zombie *randomChump();

};


#endif //EX04_ZOMBIEHORDE_HPP
