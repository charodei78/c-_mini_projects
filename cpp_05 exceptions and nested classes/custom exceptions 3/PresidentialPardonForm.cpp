//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
		:Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src)
		:Form("PresidentialPardonForm", 25, 5)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src) {
		this->_target = src._target;
	}
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
		:Form("PresidentialPardonForm", 25, 5),
		_target(target)

{
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout  << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
