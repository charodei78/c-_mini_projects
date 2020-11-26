//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_PEON_HPP
#define CPP_04_PEON_HPP

#include "Victim.hpp"
#include <iostream>
#include <string>

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(const std::string &name);
	virtual ~Peon();
	virtual void getPolymorphed() const;
};

#endif //CPP_04_PEON_HPP
