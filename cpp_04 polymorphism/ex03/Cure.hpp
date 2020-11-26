//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_CURE_HPP
#define CPP_04_CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure &src);
	~Cure();
	Cure &operator=(Cure const &src);
	void use(ICharacter &target);

	AMateria *clone() const;
};


#endif //CPP_04_CURE_HPP
