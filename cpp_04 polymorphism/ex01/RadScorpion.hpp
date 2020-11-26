//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_RADSCORPION_HPP
#define CPP_04_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const &src);
	RadScorpion & operator=(RadScorpion const &src);
};


#endif //CPP_04_RADSCORPION_HPP
