//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "Ice.hpp"
#include <iostream>

Ice::Ice(Ice &src): AMateria("ice")
{
	*this = src;
}

Ice::~Ice()
{
	std::cout << "* ice destroyed *" << std::endl;
}

Ice::Ice() : AMateria("ice")
{

}

AMateria *Ice::clone() const
{
	return new Ice;
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice &Ice::operator=(Ice const &src)
{
	if (this != &src) {

	}
	return *this;
}
