//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_AMATERIA_HPP
#define CPP_04_AMATERIA_HPP

class ICharacter;

#include <string>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string 	_type;
	unsigned int 	_xp;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	const std::string &getType() const;

	unsigned int getXp() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_04_AMATERIA_HPP
