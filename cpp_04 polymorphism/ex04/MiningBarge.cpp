//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "MiningBarge.hpp"
#include <iostream>

MiningBarge::MiningBarge()
{
	_laserNumber = 0;
}

MiningBarge::MiningBarge(MiningBarge &src)
{
	*this = src;
}

MiningBarge::~MiningBarge()
{

}

MiningBarge &MiningBarge::operator=(MiningBarge const &src)
{
	if (this != &src) {
		for (unsigned i = 0; i < _laserNumber; ++i)
			delete _laserInventory[i];
		_laserNumber = 0;
		for (unsigned i = 0; i < src._laserNumber; ++i)
			equip(src._laserInventory[i]);
	}
	return *this;
}

void MiningBarge::equip(IMiningLaser *laser)
{
	if (_laserNumber < 4)
		_laserInventory[_laserNumber++] = laser;
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
	for (unsigned i = 0 ; i < _laserNumber; ++i)
	{
		_laserInventory[i]->mine(asteroid);
	}
}
