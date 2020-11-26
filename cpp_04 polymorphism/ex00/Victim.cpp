//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "Victim was created" << std::endl;
}

Victim::~Victim()
{
	std::cout <<  "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

void Victim::introduce()
{
	std::cout << "I'm " << _name << " and I like otters!" << std::endl;
}

Victim::Victim(Victim &src)
{
	*this = src;
}

Victim &Victim::operator=(Victim &src)
{
	if (this != &src)
		this->_name = src._name;
	return *this;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

const std::string &Victim::getName() const
{
	return _name;
}

std::ostream& operator<<(std::ostream &os, Victim &src)
{
	os << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return os;
}