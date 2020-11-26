//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_IMATERIASOURCE_HPP
#define CPP_04_IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
private:

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP_04_IMATERIASOURCE_HPP
