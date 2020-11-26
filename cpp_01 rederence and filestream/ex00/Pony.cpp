//
// Created by Holli Heimerdinger on 11/10/20.
//

#include "Pony.hpp"

Pony::Pony(int age) : age(age)
{

}

Pony::~Pony()
{
	std::cout << "Pony gone" << std::endl;
}

void Pony::say(std::string text)
{

	std::cout << text << std::endl;
}

void 	ponyOnTheHeap()
{
	Pony *heapPony = new Pony(1);

	heapPony->say("Hi! I'm heap pony. I'm " + std::to_string(heapPony->age));
	delete heapPony;
}

void	ponyOnTheStack()
{
	Pony stackPony(2);
	stackPony.say("Hi! I'm stack pony. I'm " + std::to_string(stackPony.age));
}