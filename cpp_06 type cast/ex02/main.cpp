//
// Created by Holli Heimerdinger on 11/21/20.
//

#include <string>
#include "Base.hpp"

class 	A: public Base {};
class 	B: public Base {};
class 	C: public Base {};

void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);
Base * generate(void);

int 		main()
{
	Base	*tmp;

	srand(static_cast<unsigned >(time(nullptr)));
	for (int i = 0; i < 6; ++i) {
		tmp = generate();;
		identify_from_pointer(tmp);
		identify_from_reference(*tmp);
		std::cout << std::endl;
		delete tmp;
	}
	return (0);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
	try {
		(void) dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception &e) {
		try {
			(void) dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		} catch (std::exception &e) {
			try {
				(void) dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			} catch (std::exception &e) {
				std::cout << "Undefined" << std::endl;
			}
		}
	}
}

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0: return new A;
		case 1: return new B;
		case 2: return new C;
	}
	return NULL;
}
