//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_MATERIASOURCE_HPP
#define CPP_04_MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	unsigned 	_glossaryMax;
	AMateria	*_glossary[4];
	unsigned 	_glossaryNumber;
public:
	MateriaSource();
	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);
	MateriaSource(MateriaSource &src);
	~MateriaSource();

	MateriaSource &operator=(MateriaSource const &src);
};


#endif //CPP_04_MATERIASOURCE_HPP
