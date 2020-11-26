//
// Created by Holli Heimerdinger on 11/20/20.
//

#include "Intern.hpp"

std::string const Intern::_types[] = {
		"presidential pardon",
		"shrubbery creation",
		"robotomy request"
};

Form * (*Intern::_methods[])(std::string target) =
		{
			PresidentialPardonForm::create,
			ShrubberyCreationForm::create,
			RobotomyRequestForm::create
		};

Intern::Intern()
{
	return ;
}

Intern::Intern(Intern &src)
{
	*this = src;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(Intern const &src)
{
	if (this != &src) {

	}
	return *this;
}

Form *Intern::makeForm(std::string type, std::string target)
{
	for (unsigned i = 0; i < sizeof(_types) / sizeof(std::string); ++i) {
		if (_types[i] == type)
		{
			std::cout << "Intern creates " << type << std::endl;
			return _methods[i](target);
		}
	}
	std::cout << "Undefined type of form " << type << std::endl;
	return NULL;
}
