//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

AMateria *Cure::clone() const
{
	return new Cure;
}

Cure::Cure(Cure &src): AMateria("ice")
{
	*this = src;
}

Cure::~Cure()
{
	std::cout << "* cure destroyed *" << std::endl;
}

Cure &Cure::operator=(Cure const &src)
{
	if (this != &src) {

	}
	return *this;
}


void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
