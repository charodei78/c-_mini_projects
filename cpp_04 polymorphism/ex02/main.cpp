//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad *vlc = new Squad;
	ISpaceMarine* jim_copy = jim->clone();
	ISpaceMarine* bob_copy = bob->clone();

	vlc->push(bob);
	vlc->push(jim);
	std::cout << vlc->push(NULL) << std::endl;
	std::cout << vlc->push(jim) << std::endl;
	std::cout << vlc->push(bob) << std::endl;
	std::cout << vlc->push(jim_copy) << std::endl;

	Squad	new_squad;

	new_squad.push(bob_copy);
	new_squad = *vlc;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	for (int i = 0; i < new_squad.getCount(); ++i)
	{
		ISpaceMarine* cur = new_squad.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	return 0;
}

//	Tactical Marine ready for battle!$
//	* teleports from space *$
//	For the holy PLOT!$
//	* attacks with a bolter *$
//	* attacks with a chainsword *$
//	This code is unclean. PURIFY IT!$
//	* does nothing *$
//	* attacks with chainfists *$
//	Aaargh...$
//	I'll be back...$