//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << _name << "has been turned into a pink pony!" << std::endl;
}

Peon::Peon(): Victim()
{
}
