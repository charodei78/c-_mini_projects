//
// Created by Holli Heimerdinger on 11/15/20.
//
// do something width object as parametr
//

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Zeon.hpp"
#include <iostream>
#include <string>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Zeon zoe("Zoe");
//	Peon test;
//	Peon *peon = new Victim("peon");
	Victim *peon = new Peon("peon");
	std::cout << *peon;
	std::cout << zoe;
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(zoe);
	robert.polymorph(*peon);
	robert.polymorph(joe);
	return 0;
}

//Robert, the Magnificent, is born!$
//Some random victim called Jimmy just appeared!$
//Some random victim called Joe just appeared!$
//Zog zog.$
//I am Robert, the Magnificent, and I like ponies!$
//I'm Jimmy and I like otters!$
//I'm Joe and I like otters!$
//Jimmy has been turned into a cute little sheep!$
//Joe has been turned into a pink pony!$
//Bleuark...$
//Victim Joe just died for no apparent reason!$
//Victim Jimmy just died for no apparent reason!$
//Robert, the Magnificent, is dead. Consequences will never be the same!$