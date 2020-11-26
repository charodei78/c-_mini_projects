//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_TACTICALMMARINE_HPP
#define CPP_04_TACTICALMMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine: public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine &src);
	virtual ~TacticalMarine();
	TacticalMarine &operator=(TacticalMarine &src);

	void battleCry() const ;
	void meleeAttack() const;
	void rangedAttack() const;
	ISpaceMarine *clone() const;
};


#endif //CPP_04_TACTICALMMARINE_HPP
