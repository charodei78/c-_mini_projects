//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_CHARACTER_HPP
#define CPP_04_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
private:
	std::string		_name;
	AMateria		**_inventory;
	unsigned 		_inventorySize;
	unsigned 		_inventoryNumber;
	Character();

public:
	virtual const std::string &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);

	Character(std::string name);
	Character(Character &src);
	~Character();
	Character &operator=(Character const &src);
};


#endif //CPP_04_CHARACTER_HPP
