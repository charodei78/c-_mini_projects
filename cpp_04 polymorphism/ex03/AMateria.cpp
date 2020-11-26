//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "AMateria.hpp"

const std::string &AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXp() const
{
	return _xp;
}

AMateria::AMateria(const std::string &type): _type(type)
{

}

AMateria::~AMateria()
{

}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
