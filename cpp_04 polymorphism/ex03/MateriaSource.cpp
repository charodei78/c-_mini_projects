//
// Created by Holli Heimerdinger on 11/16/20.
//

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	_glossaryNumber = 0;
	_glossaryMax = 4;
}

MateriaSource::MateriaSource(MateriaSource &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (unsigned i = 0; i < _glossaryNumber; ++i) {
		delete _glossary[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{

	if (this != &src) {
		for (unsigned i = 0; i < _glossaryNumber; ++i) {
			delete _glossary[i];
		}
		_glossaryNumber = 0;
		for (unsigned i = 0; i < src._glossaryNumber; ++i) {
			learnMateria(src._glossary[i]->clone());
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_glossaryNumber < _glossaryMax)
	{
		_glossary[_glossaryNumber] = materia;
		_glossaryNumber++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (unsigned i = 0; i < _glossaryNumber; ++i) {
		if (_glossary[i]->getType() == type)
			return _glossary[i]->clone();
	}
	return NULL;
}
