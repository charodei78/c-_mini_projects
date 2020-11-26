//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "IAsteroid.hpp"
#include <iostream>

StripMiner::StripMiner()
{

}

StripMiner::StripMiner(StripMiner &src)
{
	*this = src;
}

StripMiner::~StripMiner()
{

}

StripMiner &StripMiner::operator=(StripMiner const &src)
{
	if (this != &src) {

	}
	return *this;
}

void StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining... got "<< asteroid->beMined(this) << "! *" << std::endl;
}
