//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_ICE_HPP
#define CPP_04_ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice: public AMateria
{
private:

public:
	Ice();
	Ice(Ice &src);
	~Ice();
	Ice &operator=(Ice const &src);

	void use(ICharacter &target);

	AMateria *clone() const;
};


#endif //CPP_04_ICE_HPP
