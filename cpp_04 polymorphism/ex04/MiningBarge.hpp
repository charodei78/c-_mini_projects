//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_MININGBARGE_HPP
#define CPP_04_MININGBARGE_HPP


#include "IMiningLaser.hpp"

class MiningBarge
{
private:
	unsigned 		_laserNumber;
	IMiningLaser	*_laserInventory[4];
public:
	MiningBarge();
	void equip(IMiningLaser *laser);
	void mine(IAsteroid *asteroid) const;
	MiningBarge(MiningBarge &src);
	~MiningBarge();
	MiningBarge &operator=(MiningBarge const &src);
};


#endif //CPP_04_MININGBARGE_HPP
