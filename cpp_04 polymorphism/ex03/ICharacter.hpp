//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_ICHARACTER_HPP
#define CPP_04_ICHARACTER_HPP

class AMateria;

#include <string>
#include "AMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif //CPP_04_ICHARACTER_HPP
