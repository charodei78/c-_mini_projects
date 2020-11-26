//
// Created by Holli Heimerdinger on 11/20/20.
//

#ifndef CPP_05_INTERN_HPP
#define CPP_05_INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

private:
	static const std::string _types[];
	static Form * (*_methods[])(std::string target);
public:
	Intern();
	Intern(Intern &src);
	~Intern();
	Form *makeForm(std::string const type, std::string target);
	Intern &operator=(Intern const &src);

};


#endif //CPP_05_INTERN_HPP
