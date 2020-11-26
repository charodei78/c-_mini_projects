//
// Created by Holli Heimerdinger on 11/15/20.
//


//
// Created by Holli Heimerdinger on 11/15/20.
//

//• battleCry() : "This code is unclean. PURIFY IT!"
//• rangedAttack : "* does nothing *"
//• meleeAttack : "* attacks with chainfists *"
//• Death: "I’ll be back..."

#include "AssaultTerminator.hpp"

ISpaceMarine *AssaultTerminator::clone() const
{
	return new AssaultTerminator();
}

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *"<< std::endl;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<  "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator &src)
{
	*this = src;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator &src)
{
	if (this != &src)
	{

	}
	return *this;
}
