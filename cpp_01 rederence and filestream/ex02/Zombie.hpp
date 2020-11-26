//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef EX01_ZOMBIE_HPP
#define EX01_ZOMBIE_HPP
#include <iostream>


class Zombie
{
	std::string _name;
	std::string _type;

public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
};


#endif //EX01_ZOMBIE_HPP
