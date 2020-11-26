//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "Comet.hpp"
#include <iostream>

Comet::Comet()
{

}

Comet::Comet(Comet &src)
{
	*this = src;
}

Comet::~Comet()
{

}

Comet &Comet::operator=(Comet const &src)
{
	if (this != &src) {

	}
	return *this;
}

std::string Comet::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return  "Meium";
}

std::string Comet::beMined(StripMiner *miner) const
{
	(void)miner;
	return "Tartarite";
}

std::string Comet::getName() const
{
	return  "Comet";
}
