//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef EX03_HUMAN_HPP
#define EX03_HUMAN_HPP

#include "Brain.hpp"

class Human
{
public:

	std::string identify();
	Brain & getBrain();

private:
	Brain _brain;
};


#endif //EX03_HUMAN_HPP
