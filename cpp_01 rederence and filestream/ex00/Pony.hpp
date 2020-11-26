//
// Created by Holli Heimerdinger on 11/10/20.
//

#ifndef CPP_1_PONY_HPP
#define CPP_1_PONY_HPP

#include <iostream>

void 	ponyOnTheHeap();
void	ponyOnTheStack();

class Pony
{
public:
	Pony(int age);
	~Pony();
	void say(std::string text);

	int age;
};


#endif //CPP_1_PONY_HPP
