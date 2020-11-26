//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_ASSAULTTERMINATOR_HPP
#define CPP_04_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(AssaultTerminator &src);
	AssaultTerminator& operator=(AssaultTerminator & src);
	void battleCry() const ;
	void meleeAttack() const;
	void rangedAttack() const;
	ISpaceMarine *clone() const;
};


#endif //CPP_04_ASSAULTTERMINATOR_HPP
