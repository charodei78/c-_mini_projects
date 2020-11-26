//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_ISPACEMARINE_HPP
#define CPP_04_ISPACEMARINE_HPP


class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};


#endif //CPP_04_ISPACEMARINE_HPP
