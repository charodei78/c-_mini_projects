//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_COMET_HPP
#define CPP_04_COMET_HPP


#include "IAsteroid.hpp"

class Comet: public IAsteroid
{
private:

public:
	Comet();

	std::string beMined(DeepCoreMiner *miner) const;

	std::string beMined(StripMiner *miner) const;

	std::string getName() const;

	Comet(Comet &src);

	~Comet();

	Comet &operator=(Comet const &src);
};


#endif //CPP_04_COMET_HPP
