//
// Created by Holli Heimerdinger on 11/11/20.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int 		main()
{
	FragTrap claptrap("Claptrap"); // make attack
	ScavTrap serena("Serena"); // make challenge 
	NinjaTrap ninja("Ninja"); // do some stuff
	SuperTrap super("SuperTrap"); // inherit best of claptrap and ninjatrap 

	serena.challengeNewcomer("Claptrap");
	serena.challengeNewcomer("Claptrap");
	serena.challengeNewcomer("Claptrap");

	std::cout
	<< "Claptrap:	OOOOKK! Lets did it" << std::endl
	<< "Zane:		Claptrap is lost his mind!" << std::endl
	<< "You:		he has mind!?" << std::endl;

	super.vaulthunter_dot_exe("Claptrap");
	super.ninjaShoebox(ninja);
	claptrap.vaulthunter_dot_exe("You");
	claptrap.vaulthunter_dot_exe("Zane");
	ninja.ninjaShoebox(claptrap);
	claptrap.vaulthunter_dot_exe("Moze");
	claptrap.vaulthunter_dot_exe("Amara");
	ninja.ninjaShoebox(serena);
	ninja.ninjaShoebox(ninja);

	claptrap.vaulthunter_dot_exe("Zane");

}