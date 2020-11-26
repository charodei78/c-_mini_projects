//
// Created by Holli Heimerdinger on 11/21/20.
//

#include "Base.hpp"


Base::Base()
{

}

Base::Base(Base &src)
{
	*this = src;
}

Base::~Base()
{

}

Base &Base::operator=(Base const &src)
{
	if (this != &src) {

	}
	return *this;
}
