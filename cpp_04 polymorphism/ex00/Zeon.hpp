//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_ZEON_HPP
#define CPP_04_ZEON_HPP

#include "Victim.hpp"
#include <iostream>
#include <string>

class Zeon: public Victim
{
private:
	Zeon();
public:
	Zeon(const std::string &name);
	virtual ~Zeon();
	virtual void getPolymorphed() const;
};

#endif //CPP_04_ZEON_HPP
