//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner &src)
{
	*this = src;
}

DeepCoreMiner::~DeepCoreMiner()
{

}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &src)
{
	if (this != &src) {

	}
	return *this;
}

void DeepCoreMiner::mine(IAsteroid *asteroid)
{
		std::cout << "* mining deep... got "<< asteroid->beMined(this) << "! *" << std::endl;

}
