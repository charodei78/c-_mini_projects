//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "Asteroid.hpp"
#include <iostream>

Asteroid::Asteroid()
{

}

Asteroid::Asteroid(Asteroid &src)
{
	*this = src;
}

Asteroid::~Asteroid()
{

}

Asteroid &Asteroid::operator=(Asteroid const &src)
{
	if (this != &src) {

	}
	return *this;
}

std::string Asteroid::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return "Dragonite";
}

std::string Asteroid::beMined(StripMiner *miner) const
{
	(void)miner;
	return "Flavium";
}

std::string Asteroid::getName() const
{
	return "Asteroid";
}
