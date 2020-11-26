//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_DEEPCOREMINER_HPP
#define CPP_04_DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <iostream>

class DeepCoreMiner: public IMiningLaser
{
private:

public:
	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner &src);
	~DeepCoreMiner();

private:
	void mine(IAsteroid *asteroid) ;

public:
	DeepCoreMiner &operator=(DeepCoreMiner const &src);
};


#endif //CPP_04_DEEPCOREMINER_HPP
