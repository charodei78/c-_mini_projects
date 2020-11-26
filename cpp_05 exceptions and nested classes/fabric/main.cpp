//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int 	main()
{
		Bureaucrat *bob = new Bureaucrat("Bob", 15);
	Bureaucrat *cinderella = new Bureaucrat("Золушка", 5);
	Bureaucrat *thomas = new Bureaucrat("Томас Джефферсон", 1);
	Bureaucrat *zafod = new Bureaucrat("Zafod Beeblebrox", 3);

	Intern		vitya;

	Form		declaration("Декларация расходов", 100, 14);
	Form		contract("Контракт", 50, 14);
	Form		declarationOfIndependence("Декларация независимости", 1, 14);
	Form		*robotomy = vitya.makeForm("robotomy request", "Russia");
	Form		*shrubbery = vitya.makeForm("shrubbery creation", "Ogorod");
	Form		*presidential =  vitya.makeForm("presidential pardon", "You");
	Form		*test =  vitya.makeForm("undefined", "You");
	(void)test;

	std::cout << std::endl<< *bob;
	bob->signForm(declaration);
	bob->signForm(contract);
	bob->executeForm(contract);
	bob->signForm(declarationOfIndependence);
	bob->executeForm(*shrubbery);
	bob->signForm(*shrubbery);
	cinderella->executeForm(*shrubbery);


	std::cout << std::endl << *thomas;
	thomas->signForm(contract);
	thomas->signForm(*robotomy);
	thomas->executeForm(*robotomy);
	thomas->executeForm(contract);
	thomas->executeForm(declarationOfIndependence);
	thomas->signForm(declarationOfIndependence);
	thomas->executeForm(declarationOfIndependence);

	std::cout << std::endl << *zafod;
	zafod->signForm(*presidential);
	zafod->executeForm(*presidential);

	delete cinderella;
	delete thomas;
	delete zafod;
	delete	bob;
}