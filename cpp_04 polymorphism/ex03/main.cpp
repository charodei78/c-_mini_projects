//
// Created by Holli Heimerdinger on 11/16/20.
//


#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	Character original("original");
	Character copy("copy");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("undefined"); // return null
	me->equip(tmp); // Empty Materia
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp); // Equip exist Materia
	tmp = src->createMateria("cure");
	copy.equip(tmp);
	tmp = src->createMateria("cure");
	original.equip(tmp);
	tmp = src->createMateria("ice");
	original.equip(tmp);
	copy = original; // * cure destroyed *
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(2);
	me->unequip(3);	// Undefined index of item!
	me->unequip(2);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(2, *bob);
	std::cout << tmp->getXp() << std::endl;
	me->use(2, *bob);
	std::cout << tmp->getXp() << std::endl;
	me->use(3, *bob); // Undefined index of item!


	delete bob;
	delete me;
	delete src;
	return 0;
}
