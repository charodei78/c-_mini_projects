//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "Brain.hpp"

std::string Brain::identify()
{
	 std::stringstream ss;
	 ss << std::hex << this;
	 return ss.str();
}
