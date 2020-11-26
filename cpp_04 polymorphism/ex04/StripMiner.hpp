//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_STRIPMINER_HPP
#define CPP_04_STRIPMINER_HPP

#include "IMiningLaser.hpp"

class StripMiner: public IMiningLaser
{
private:

public:
	StripMiner();
	StripMiner(StripMiner &src);
	~StripMiner();

private:
	void mine(IAsteroid *asteroid) ;

public:
	StripMiner &operator=(StripMiner const &src);
};


#endif //CPP_04_STRIPMINER_HPP
