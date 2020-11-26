//
// Created by Holli Heimerdinger on 11/15/20.
//


#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	PowerFist pf_src;
	PowerFist pf_copy;
	pf_copy = pf_src;
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	Enemy* sup = new SuperMutant();
	std::cout << *me;
	me->attack(sup);
	me->attack(sup);
	me->recoverAP();
	me->recoverAP();
	me->equip(pf);
	me->attack(sup);
	me->attack(sup);
	me->attack(sup);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();

	return 0;
}


//me has 40 AP and is unarmed$
//* click click click *$
//me has 40 AP and wields a Plasma Rifle$
//me attacks RadScorpion with a Power Fist$
//* pschhh... SBAM! *$
//me has 32 AP and wields a Power Fist$
//me has 32 AP and wields a Plasma Rifle$
//me attacks RadScorpion with a Plasma Rifle$
//* piouuu piouuu piouuu *$
//me has 27 AP and wields a Plasma Rifle$
//me attacks RadScorpion with a Plasma Rifle$
//* piouuu piouuu piouuu *$
//* SPROTCH *$
//me has 22 AP and wields a Plasma Rifle$
