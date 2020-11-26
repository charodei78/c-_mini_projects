//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "Human.hpp"

Brain & Human::getBrain()
{
	return this->_brain;
}

std::string Human::identify()
{
	return this->_brain.identify();
}

