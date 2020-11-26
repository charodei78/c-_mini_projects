//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ",  is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce()
{
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &src)
{
	*this = src;
}

Sorcerer &Sorcerer::operator=(Sorcerer &src)
{
	if (&src != this)
	{
		this->_name = src._name;
		this->_title = src._title;
	}
	return *this;
}

const std::string &Sorcerer::getName() const
{
	return _name;
}

const std::string &Sorcerer::getTitle() const
{
	return _title;
}

Sorcerer::Sorcerer()
{

}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream &os, Sorcerer &src)
{
	os << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}
