//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "Character.hpp"
#include <iostream>

Character::Character()
{

}

Character::Character(std::string name): _name(name)
{
	_inventorySize = 4;
	_inventoryNumber = 0;
	_inventory = static_cast<AMateria **>(operator new[](sizeof(AMateria *) * _inventorySize));
}

Character::Character(Character &src)
{
	*this = src;
}

Character::~Character()
{

}

Character &Character::operator=(Character const &src)
{
	if (this != &src){
		for (unsigned i = 0; i < this->_inventoryNumber; ++i) {
			delete _inventory[i];
		}
		this->_inventoryNumber = 0;
		for (unsigned i = 0; i < src._inventoryNumber; ++i) {
			this->equip(src._inventory[i]->clone());
		}
		this->_inventorySize = src._inventorySize;
		this->_inventoryNumber = src._inventoryNumber;
    }
    return *this;
}

const std::string &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		std::cout << "Empty Materia" << std::endl;
	if ((this->_inventoryNumber < this->_inventorySize))
	{
		for (unsigned i = 0; i < this->_inventoryNumber; ++i) {
			if (_inventory[i] == m)
			{
				std::cout << "Equip exist Materia" << std::endl;
				return;
			}
		}
		this->_inventory[this->_inventoryNumber] = m;
		this->_inventoryNumber++;
	} else {
		std::cout << "Inventory is full!" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if ((unsigned)idx < _inventoryNumber)
	{
		this->_inventory[idx] = 0;
		_inventoryNumber--;
		if ((unsigned)idx != _inventoryNumber)
		{
			for (unsigned i = 0; i < this->_inventoryNumber; ++i) {
				if (_inventory[i] == 0) {
					_inventory[i] = _inventory[i + 1];
					_inventory[i + 1] = 0;
				}
			}
		}
	}
	else
		std::cout << "Undefined index of item!" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || (unsigned)idx < _inventoryNumber)
		this->_inventory[idx]->use(target);
	else
		std::cout << "Undefined index of item!" << std::endl;
}
