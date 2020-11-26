//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int 	main()
{
	Bureaucrat *bob = new Bureaucrat("Bob", 15);
	Bureaucrat *thomas = new Bureaucrat("Томас Джефферсон", 1);

	Form		declaration("Декларация расходов", 100, 14);
	Form		contract("Контракт", 50, 14);
	Form		declarationOfIndependence("Декларация независимости", 1, 14);

		std::cout << *bob;
		bob->signForm(declaration);
		bob->signForm(contract);
		bob->signForm(declarationOfIndependence);

		std::cout << *thomas;
		thomas->signForm(contract);
		thomas->signForm(declarationOfIndependence);

	delete	bob;
	delete	thomas;
}