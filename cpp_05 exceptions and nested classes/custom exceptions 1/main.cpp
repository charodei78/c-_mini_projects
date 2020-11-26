//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "Bureaucrat.hpp"

int 	main()
{
	Bureaucrat *more;
	Bureaucrat *less;
	Bureaucrat *increment;
	Bureaucrat *decrement;
	Bureaucrat *normal;
	try
	{
		more = new Bureaucrat("more", 0);
	}	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		less = new Bureaucrat("less", 156);
	}	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		increment = new Bureaucrat("increment", 1);
		std::cout << *increment;
		increment->gradeDown();
		std::cout << *increment;
		increment->gradeUp();
		std::cout << *increment;
		increment->gradeUp();
	}	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		decrement = new Bureaucrat("decrement", 150);
		std::cout << *decrement;
		decrement->gradeUp();
		std::cout << *decrement;
		decrement->gradeDown();
		std::cout << *decrement;
		decrement->gradeDown();
		std::cout << *decrement;
	}	catch (std::exception& e) {
		std::cout << e.what() << std::endl;

	}
	try
	{
		normal = new Bureaucrat("normal", 15);
		std::cout << *normal;
		normal->gradeUp();
		std::cout << *normal;
		normal->gradeDown();
		std::cout << *normal;
		normal->gradeDown();
		std::cout << *normal;
	}	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	delete	increment;
	delete	decrement;
	delete	normal;
}