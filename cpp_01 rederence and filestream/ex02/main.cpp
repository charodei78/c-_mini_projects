//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "ZombieEvent.hpp"

int 		main()
{
	Zombie *player = ZombieEvent::newZombie("player");
	ZombieEvent::setZombieType("slay");
	Zombie *louise = ZombieEvent::newZombie("Louise");
	Zombie *stranger;

	std::cout << "Начнем!" << std::endl;
	ZombieEvent::setZombieType("black");
	std::cout << "Прямо из под земли вылез новый зомби!" << std::endl;
	stranger = ZombieEvent::randomChump();
	std::cout << "И сразу умер..." << std::endl;
	delete stranger;
	std::cout << "Как жаль. Помянем" << std::endl;
	player->announce();
	louise->announce();
	std::cout << "Тот кто его убил его идет на нас! Похоже нам конец :(" << std::endl;
	delete player;
	delete louise;
	std::cout << "Конец!" << std::endl;

}