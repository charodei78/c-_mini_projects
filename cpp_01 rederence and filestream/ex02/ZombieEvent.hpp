//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{

public:
	static Zombie* newZombie(std::string name);
	static Zombie* randomChump();
	static void setZombieType(std::string zombieType);


private:
	static std::string _zombieType;
	static std::string _name[5];
};


#endif //EX02_ZOMBIEEVENT_HPP
