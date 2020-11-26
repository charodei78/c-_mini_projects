//
// Created by Holli Heimerdinger on 11/21/20.
//

#ifndef CPP_06_BASE_HPP
#define CPP_06_BASE_HPP

#include <iostream>


class Base
{
private:

public:
	Base();

	Base(Base &src);

	virtual ~Base();

	Base &operator=(Base const &src);
};


#endif //CPP_06_BASE_HPP
