//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_ASTEROID_HPP
#define CPP_04_ASTEROID_HPP

#include "IAsteroid.hpp"

class Asteroid: public IAsteroid
{
private:

public:
	std::string beMined(StripMiner *miner) const;
	std::string getName() const;
	std::string beMined(DeepCoreMiner *miner) const;
	Asteroid();
	Asteroid(Asteroid &src);
	~Asteroid();
	Asteroid &operator=(Asteroid const &src);
};


#endif //CPP_04_ASTEROID_HPP
