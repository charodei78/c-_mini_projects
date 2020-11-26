//
// Created by Holli Heimerdinger on 11/19/20.
//

#ifndef CPP_05_SHRUBBERYCREATIONFORM_HPP
#define CPP_05_SHRUBBERYCREATIONFORM_HPP

#include <iostream>

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{

private:
	std::string 	_target;

	ShrubberyCreationForm();
public:
	static Form* create(std::string target);
	virtual void execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
};


#endif //CPP_05_SHRUBBERYCREATIONFORM_HPP
