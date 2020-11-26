//
// Created by Holli Heimerdinger on 11/19/20.
//

#ifndef CPP_05_PRESIDENTIALPARDONFORM_HPP
#define CPP_05_PRESIDENTIALPARDONFORM_HPP

#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm: public Form
{

private:
	std::string 	_target;

	PresidentialPardonForm();
public:
	virtual void execute(Bureaucrat const & executor) const;
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &src);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
};


#endif //CPP_05_PRESIDENTIALPARDONFORM_HPP
