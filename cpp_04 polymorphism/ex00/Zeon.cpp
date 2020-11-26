//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Zeon.hpp"

Zeon::Zeon(const std::string &name) : Victim(name)
{
	std::cout << "Pug pug." << std::endl;
}

Zeon::~Zeon()
{
	std::cout << "Laaark..." << std::endl;
}

void Zeon::getPolymorphed() const
{
	std::cout << _name << "has been turned into a pink pony!" << std::endl;
}

Zeon::Zeon(): Victim()
{
}
