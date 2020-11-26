//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_SORCERER_HPP
#define CPP_04_SORCERER_HPP

#include "Victim.hpp"
#include <iostream>
#include <string>

class Sorcerer
{
	std::string _name;
public:
	const std::string &getName() const;

	const std::string &getTitle() const;

private:
	std::string _title;
	Sorcerer();
public:
	void polymorph(Victim const &victim) const;
	virtual ~Sorcerer();
	Sorcerer(std::string name, std::string title);
	void introduce();
	Sorcerer(Sorcerer& src);
	Sorcerer& operator=(Sorcerer& src);

};

std::ostream& operator<<(std::ostream& os, Sorcerer& src);

#endif //CPP_04_SORCERER_HPP
