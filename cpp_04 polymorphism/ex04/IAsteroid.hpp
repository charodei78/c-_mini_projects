//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_IASTEROID_HPP
#define CPP_04_IASTEROID_HPP

class DeepCoreMiner;
class StripMiner;

#include <string>
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"


class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner *miner) const = 0;
	virtual std::string beMined(StripMiner *miner) const = 0;
	virtual std::string getName() const = 0;
};

#endif //CPP_04_IASTEROID_HPP
