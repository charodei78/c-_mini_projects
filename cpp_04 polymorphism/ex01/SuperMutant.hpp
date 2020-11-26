//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_SUPERMUTANT_HPP
#define CPP_04_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	virtual void takeDamage(int points);
	SuperMutant(SuperMutant const &src);
	SuperMutant & operator=(SuperMutant const &src);
};


#endif //CPP_04_SUPERMUTANT_HPP
