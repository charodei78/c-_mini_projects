//
// Created by Holli Heimerdinger on 11/15/20.
//

#ifndef CPP_04_VICTIM_HPP
#define CPP_04_VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
protected:
		std::string _name;
		Victim();
public:
	const std::string &getName() const;
	virtual void getPolymorphed() const;
	virtual ~Victim();
	Victim(std::string name);
	virtual void introduce();
	Victim(Victim& src);
	Victim& operator=(Victim& src);
};

std::ostream& operator<<(std::ostream& os, Victim& src);

#endif //CPP_04_VICTIM_HPP
