//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{

}

Zombie::~Zombie()
{
	std::cout << this->_name << " " << this->_type << ": *Dead again*" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << " " << _type << ": Braiiiiiiinnnssss..." << std::endl;
}
