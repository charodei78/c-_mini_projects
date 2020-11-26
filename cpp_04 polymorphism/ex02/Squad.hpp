//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_SQUAD_HPP
#define CPP_04_SQUAD_HPP


#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"

class Squad: public ISquad
{
	int 				_unitNumber;
	ISpaceMarine		**_squad;

public:
	Squad();
	virtual ~Squad();
	Squad(Squad const & src);
	Squad & operator=(Squad const & src);
	int getCount() const;
	ISpaceMarine *getUnit(int i) const;
	int push(ISpaceMarine *marine);
};


#endif //CPP_04_SQUAD_HPP
