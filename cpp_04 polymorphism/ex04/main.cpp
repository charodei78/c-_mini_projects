//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"
#include "Comet.hpp"
#include "Asteroid.hpp"

int 		main()
{
	IMiningLaser * deep = new DeepCoreMiner();
	IMiningLaser * strip = new StripMiner();
	IMiningLaser * deep1 = new DeepCoreMiner();
	IMiningLaser * strip1 = new StripMiner();
	IAsteroid		*commet = new Comet();
	IAsteroid		*asteroid = new Asteroid();
	MiningBarge 	barge;

	barge.equip(deep);
	std::cout << "mine asteroid" << std::endl;
	barge.mine(commet);

	barge.equip(strip);
	barge.equip(deep1);
	std::cout << "mine commet" << std::endl;
	barge.mine(commet);

	barge.equip(strip1);
	barge.equip(strip1);

	std::cout << "mine commet" << std::endl;
	barge.mine(commet);
	std::cout << "mine asteroid" << std::endl;
	barge.mine(asteroid);


	return 0;
}