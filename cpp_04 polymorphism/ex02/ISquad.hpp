//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_ISQUAD_HPP
#define CPP_04_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
	public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};
#endif //CPP_04_ISQUAD_HPP
